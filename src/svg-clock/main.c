#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846
#define PI_2 1.57079632679489661923
#define X 600 //svg width
#define Y 600 //svg height
#define X_2 X/2 //ox
#define Y_2 Y/2 //oy
#define FONT_SIZE 40 //betu meret

//svg alapja
const char * clock[] = {
	"<svg version=\"1.1\" width=\"%d\" height=\"%d\" baseProfile=\"full\" xmlns=\"http://www.w3.org/2000/svg\">\n",
	"    <circle cx=\"%d\" cy=\"%d\" r=\"%d\" stroke=\"black\" stroke-width=\"3\" fill=\"#e8e9ec\"/>\n",
	"    <line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" style=\"stroke:rgb(0,0,0);stroke-width:7\"/>\n",
	"    <line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" style=\"stroke:rgb(0,0,0);stroke-width:10\"/>\n",
	"    <line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" style=\"stroke:rgb(255,0,0);stroke-width:4\"/>\n",
	"    <circle cx=\"%d\" cy=\"%d\" r=\"%d\" fill=\"red\"/>\n",
	"    <text x=\"%d\" y=\"%d\" font-size=\"%d\">3</text>\n",
	"    <text x=\"%d\" y=\"%d\" font-size=\"%d\">4</text>\n",
	"    <text x=\"%d\" y=\"%d\" font-size=\"%d\">5</text>\n",
	"    <text x=\"%d\" y=\"%d\" font-size=\"%d\">6</text>\n",
	"    <text x=\"%d\" y=\"%d\" font-size=\"%d\">7</text>\n",
	"    <text x=\"%d\" y=\"%d\" font-size=\"%d\">8</text>\n",
	"    <text x=\"%d\" y=\"%d\" font-size=\"%d\">9</text>\n",
	"    <text x=\"%d\" y=\"%d\" font-size=\"%d\">10</text>\n",
	"    <text x=\"%d\" y=\"%d\" font-size=\"%d\">11</text>\n",
	"    <text x=\"%d\" y=\"%d\" font-size=\"%d\">12</text>\n",
	"    <text x=\"%d\" y=\"%d\" font-size=\"%d\">1</text>\n",
	"    <text x=\"%d\" y=\"%d\" font-size=\"%d\">2</text>\n",
	"</svg>"
};

void print_svg(int hx, int hy, int mx, int my, int sx, int sy, int cr, int sr, int szx, int szy, int sz2x, int sz2y) {
	//<svg>
	printf(clock[0], X, Y);

	//hatter
	printf(clock[1], X_2, X_2, cr);

	//h
	printf(clock[2], X_2, X_2, hx, hy);

	//m
	printf(clock[3], X_2, X_2, mx, my);

	//s
	printf(clock[4], X_2, X_2, sx, sy);
	
	//piros kor
	printf(clock[5], X_2, X_2, sr);

	//szamozas
	for (int i = 6, x = 0; i < 18; i++, x++) {
		//szamok
		szx = round((X_2 - 40)  * cos((PI / 6) * x) + X_2);
		szy = round((X_2 - 40)  * sin((PI / 6) * x) + X_2);
		printf(clock[i], szx - ((i == 15) ? 20 : 12), szy + 12, FONT_SIZE);

		//oras beosztas
		szx = round((X_2 - 20)  * cos((PI / 6) * x) + X_2);
		szy = round((X_2 - 20)  * sin((PI / 6) * x) + X_2);
		sz2x = round(X_2 * cos((PI / 6) * x) + X_2);
		sz2y = round(X_2 * sin((PI / 6) * x) + X_2);
		printf("    <line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" style=\"stroke:rgb(0,0,0);stroke-width:8\"/>\n", szx, szy, sz2x, sz2y);
	}

	//perces beosztas
	for (int i = 0; i < 60; i++) {
		if (i % 5 == 0) {
			continue;
		}
		szx = round((X_2 - 20) * cos((PI / 30) * i) + X_2);
		szy = round((X_2 - 20) * sin((PI / 30) * i) + X_2);
		sz2x = round(X_2 * cos((PI / 30) * i) + X_2);
		sz2y = round(X_2 * sin((PI / 30) * i) + X_2);
		printf("    <line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" style=\"stroke:rgb(0,0,0);stroke-width:3\"/>\n", szx, szy, sz2x, sz2y);
	}

	//</svg>
	printf(clock[18]);
}

void calc_hands(double h, double m, double s) {
	int hx = 0, hy = 0, mx = 0, my = 0, sx = 0, sy = 0;
	int cr = X_2 - 1 , sr = round(X_2 * 0.05);
	int szx = 0, szy = 0, sz2x = 0, sz2y = 0;
	m = m * 60 + s; //m->m+s
	h = h * 3600 + m; //h->h+s

	//s mutato
	sx = round((X_2-30) * cos(PI*1.5 + (PI_2 / 15) * s) + X_2);
	sy = round((X_2-30) * sin(PI*1.5 + (PI_2 / 15) * s) + X_2);

	//m mutato
	mx = round((X_2-10) * cos(PI*1.5 + (PI_2 / 900) * m) + X_2);
	my = round((X_2-10) * sin(PI*1.5 + (PI_2 / 900) * m) + X_2);

	//h mutato
	hx = round((X_2-40) * cos(PI*1.5 + (PI_2 / 10800) * h) + X_2);
	hy = round((X_2-40) * sin(PI*1.5 + (PI_2 / 10800) * h) + X_2);

	print_svg( hx, hy, mx, my, sx, sy, cr, sr, szx, szy, sz2x, sz2y);
}


int main(int argc, char ** argv) {
	double h = .0, m = .0, s = .0;
	if (argc < 4) {
		printf("H M S: ");
		scanf("%lf %lf %lf", &h, &m, &s);
		calc_hands(h, m, s);
	}
	else {
		h = atof(argv[1]), m = atof(argv[2]), s = atof(argv[3]);
		calc_hands(h,m,s);
	}
}
#include <SDL.h>
#include <SDL_gfxPrimitives.h>
#include <math.h>

int main(int argc, char *argv[]) {
    SDL_Event ev;
    SDL_Surface *screen;
    SDL_Init(SDL_INIT_VIDEO);
    screen = SDL_SetVideoMode(640, 480, 0, SDL_ANYFORMAT);
    if (!screen) {
        fprintf(stderr, "Nem sikerult megnyitni az ablakot!\n");
        exit(1);
    }
    SDL_WM_SetCaption("Azon pontok mértani helye...", NULL);
    stringRGBA(screen, 200, 470, "Kilepeshez: piros x az ablakon", 255, 255, 255, 255);

    //for ciklushoz
    int x, y;
    double F1P, F2P;
    double tavolsag;
    double egyenestav;
    double KP;
    //epszilon
    double eps = 1;

    for(x = 0; x < 640; x++){
        for(y = 0; y < 480; y++){
            //kor
            KP = sqrt(pow(x-320, 2) + pow(y-240, 2));
            if(KP >= 200-eps && KP <= 200+eps){
                pixelRGBA(screen, x, y, 255, 0, 0, 255);
            }

            //ellipszis
            F1P = sqrt(pow(x-240, 2) + pow(y-200, 2));
            F2P = sqrt(pow(x-400, 2) + pow(y-280, 2));
            tavolsag = F1P + F2P;
            if(tavolsag >= 250-eps && tavolsag <= 250+eps){
                pixelRGBA(screen, x, y, 0, 255, 0, 255);
            }

            //hiperbola
            F1P = sqrt(pow(x-240, 2) + pow(y-240, 2));
            F2P = sqrt(pow(x-400, 2) + pow(y-240, 2));
            tavolsag = (F1P - F2P);
            if(tavolsag >= 100-eps && tavolsag <= 100+eps){
                pixelRGBA(screen, x, y, 0, 0, 255, 255);
            }

            //parabola
            F1P = sqrt(pow(x-320, 2) + pow(y-240, 2));
            //egyenes y == Py => y-y = 0
            egyenestav = sqrt(pow(x-400, 2));
            if(F1P >= egyenestav-eps && F1P <= egyenestav+eps){
                pixelRGBA(screen, x, y, 255, 255, 255, 255);
            }
        }
    }
    //kor
    stringRGBA(screen, 320, 30, "Kor", 255, 0, 0, 255);
    //ellipszis
    stringRGBA(screen, 320, 140, "Ellipszis", 0, 255, 0, 255);
    //hiperbola
    stringRGBA(screen, 515, 20, "Hiperbola", 0, 0, 255, 255);
    //parabola
    stringRGBA(screen, 90, 60, "Parabola", 255, 255, 255, 255);

    SDL_Flip(screen);
    while (SDL_WaitEvent(&ev) && ev.type != SDL_QUIT) {
    }
    SDL_Quit();
    return 0;
}

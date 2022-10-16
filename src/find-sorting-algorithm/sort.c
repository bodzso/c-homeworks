#include <stdio.h>
 
int main(void) {
    int tomb[10] = { 9, 5, 8, 2, 7, 5, 3, 8, 2, 1 };
    
    int x, y;
    for (x = 0; x < 9; x += 1)
        for (y = x+1; y < 10; y += 1)
            if (tomb[x] > tomb[y]) {
                int tmp = tomb[x];
                tomb[x] = tomb[y];
                tomb[y] = tmp;
            }
    
    for (x = 0; x < 10; x += 1)
        printf("%d ", tomb[x]);
}

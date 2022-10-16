#include <stdio.h>
#include <stdbool.h>

int tomb[10] = {  9, 5, 8, 2, 7, 5, 3, 8, 2, 1 };

void display() {
   int i;
   printf("[");

   // navigate through all items
   for(i = 0; i < 10; i++) {
      printf("%d ",tomb[i]);
   }

   printf("]\n");
}


int main(void) {

    //int tomb[10] = { 1, 2, 2, 3, 5, 5, 7, 8, 8, 9 };
    int x, y, min;
    for (x = 0; x < 9; x += 1){
        min = x;
        for (y = x+1; y < 10; y += 1){
            printf("Items compared: [ %d, %d ] ", tomb[min], tomb[y]);
            if (tomb[min] > tomb[y]) {
                min = y;
                printf(" => not swapped\n");
            }
            else{
                printf(" => not swapped\n");
            }
        }
        printf(" => swapped [%d, %d]\n", tomb[x], tomb[min]);
        int tmp = tomb[x];
        tomb[x] = tomb[min];
        tomb[min] = tmp;

        printf("Iteration %d#: ",x+1);
        display();
    }

    for (x = 0; x < 10; x += 1)
        printf("%d ", tomb[x]);
    //return 0;
    return 0;
}

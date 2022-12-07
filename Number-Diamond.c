/* 
   ---------------------------
    README : not finished yet
   ---------------------------
*/
#include <stdio.h>
int main() {
    int diamondsize, x, y;
    printf("Input diamond size : ");
    scanf("%d", &diamondsize);
    for (x = 1; x <= diamondsize; x++) {
        for (y = 1; y <= diamondsize - x; y++) {
            printf(" ");
        }
        for (y = 1; y <= x; y++) {
            printf("%d", y);
        }
        printf("\n");
    }
}
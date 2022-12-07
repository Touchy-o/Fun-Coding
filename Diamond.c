#include <stdio.h>
int main() {
    int diamondsize, x, y;
    printf("Input diamond size : ");
    scanf("%d", &diamondsize);
    for (x = 1; x <= diamondsize; x++) {
        for (y = 1; y <= diamondsize - x; y++) {
            printf(" ");
        }
        for (y = 1; y <= 2 * x - 1; y++) {
            printf("*");
        }
        printf("\n");
    }
    for (x = diamondsize - 1; x >= 1; x--) {
        for (y = 1; y <= diamondsize - x; y++) {
            printf(" ");
        }
        for (y = 1; y <= 2 * x - 1; y++) {
            printf("*");
        }
        printf("\n");
    }
}
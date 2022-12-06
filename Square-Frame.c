#include <stdio.h>
int main() {
    int framesize, x, y;
    printf("Input frame size : ");
    scanf("%d", &framesize);
    for (y = 0; y < framesize; y++) {
        for (x = 0; x < framesize; x++) { 
            if (y == 0 || x == 0 || y == framesize - 1 || x == framesize - 1) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
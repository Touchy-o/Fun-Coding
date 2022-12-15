#include <stdio.h>

void printFrame(int size);

int main() {
    int frameSize;
    printf("Input frame size: ");
    scanf("%d", &frameSize);

    printFrame(frameSize);

    return 0;
}

void printFrame(int size) {
    for (int y = 0; y < size; y++) {
        for (int x = 0; x < size; x++) {
            if (y == 0 || x == 0 || y == size - 1 || x == size - 1) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
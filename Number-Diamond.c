#include <stdio.h>

void printDiamond(int size);
void printTriangle(int size);
void printRow(int size, int row);

int main() {
    int diamondSize;
    printf("Input diamond size: ");
    scanf("%d", &diamondSize);

    printDiamond(diamondSize);

    return 0;
}

void printDiamond(int size) {
    printTriangle(size);

    for (int row = 1; row < size; row++) {
        printRow(size, row);
    }
}

void printTriangle(int size) {
    for (int row = 1; row <= size; row++) {
        printRow(size, row);
    }
}

void printRow(int size, int row) {
    for (int i = 1; i <= size - row; i++) {
        printf(" ");
    }
    for (int i = 1; i <= row; i++) {
        printf("%d", i);
    }
    for (int i = 1; i < row; i++) {
        printf("%d", (row - i));
    }
    printf("\n");
}

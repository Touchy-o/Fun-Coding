#include <stdio.h>

void printTriangle(int size);
void printRow(int size, int row);

int main() {
    int triangleSize;
    printf("Input triangle size: ");
    scanf("%d", &triangleSize);

    printTriangle(triangleSize);

    return 0;
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

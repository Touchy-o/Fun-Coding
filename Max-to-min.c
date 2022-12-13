#include <stdio.h>
int main() {
    int i, j, count;
    int number[] = {6, 8, 3, 2, 1, 7, 5, 9, 4};
    int numberLen = sizeof(number) / sizeof(number[0]);
    for (i = 0; i < numberLen; i++) {
        for (j = i + 1; j < numberLen; j++) {
            if (number[i] < number[j]) {
                count = number[i];
                number[i] = number[j];
                number[j] = count;
            }
        }
    }
    for (i = 0; i < numberLen; i++) {
        printf("%d ", number[i]);
    }
}
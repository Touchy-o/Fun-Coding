#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int i, number[100];
    int numberLen = 0;

    while (scanf("%d", &number[numberLen]) == 1) {
        numberLen++;
    }

    qsort(number, numberLen, sizeof(int), compare);

    for (i = 0; i < numberLen; i++) {
        printf("%d ", number[i]);
    }
    return 0;
}
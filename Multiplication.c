#include <stdio.h>

void printTable(int number, int multiply);

int main() {
    int number, multiply;
    printf("Input the number: ");
    scanf("%d", &number);
    printf("Input the multiply: ");
    scanf("%d", &multiply);

    printTable(number, multiply);

    return 0;
}

void printTable(int number, int multiply) {
    for (int i = 1; i <= multiply; i++) {
        printf("%d x %d = %d\n", number, i, (number * i));
    }
}

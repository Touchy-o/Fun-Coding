#include <stdio.h>
int main() {
    int userInput, i;
    printf("Input : ");
    scanf("%d", &userInput);
    for (i = 1; i <= 12; i++) {
        printf("%d x %d = %d\n", userInput, i, (userInput * i));
    }
    return 0;
}
#include <stdio.h>
int main() {
    int number, multiply, i;
    printf("Input the number : ");
    scanf("%d", &number);
    printf("Input the multiply : ");
    scanf("%d", &multiply);
    for (i = 1; i <= multiply; i++) {
        printf("%d x %d = %d\n", number, i, (number * i));
    }
    return 0;
}
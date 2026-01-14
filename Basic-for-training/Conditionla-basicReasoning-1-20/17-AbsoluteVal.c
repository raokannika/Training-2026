#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;

    printf("Absolute value is %d", num);

}

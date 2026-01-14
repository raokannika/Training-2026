#include <stdio.h>

int main() {
    int num, a, b;

    printf("Enter number and range: ");
    scanf("%d %d %d", &num, &a, &b);

    if (num >= a && num <= b)
        printf("Number is within the range");
    else
        printf("Number is outside the range");

    return 0;
}

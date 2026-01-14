#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a % 10 == b % 10)
        printf("Both numbers have the same last digit");
    else
        printf("Last digits are different");

    return 0;
}

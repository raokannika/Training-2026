#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a + b + abs(a - b)) / 2;

    printf("Larger number is %d", max);

    return 0;
}

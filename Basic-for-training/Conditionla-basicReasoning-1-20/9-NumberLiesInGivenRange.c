#include <stdio.h>

int main() {
    int num, a, b;

    printf("Enter number and range values: ");
    scanf("%d %d %d", &num, &a, &b);

    if (num > a && num < b)
        printf("Number %d lies between %d and %d",num, a, b);
    else
        printf("Number %d does not lie between %d and %d",num,a, b);

    return 0;
}

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 4 == 0 && num % 8 != 0)
        printf("Number %d is Divisible by 4 but not by 8",num);
    else
        printf("Number %d is not Divisible by 4",num);

    return 0;
}

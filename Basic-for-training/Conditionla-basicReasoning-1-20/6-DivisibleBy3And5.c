#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
        printf("%d is Divisible by both 3 and 5",num);
    else
        printf("%d is Not divisible by both 3 and 5",num);

    return 0;
}

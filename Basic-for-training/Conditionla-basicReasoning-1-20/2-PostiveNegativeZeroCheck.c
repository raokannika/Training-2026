#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("Entered Number is Positive number");
    else if (num < 0)
        printf("Entered Number is Negative number");
    else
        printf("Entered Number is Zero");

    return 0;
}

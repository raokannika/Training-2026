#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 10 == 5)
        printf("Number ends with 5 ");
    else if(num % 10 == 0)
    {
        printf("Number end with 0");
    }
    else
        printf("Number does not end with 5 or 0");

    return 0;
}

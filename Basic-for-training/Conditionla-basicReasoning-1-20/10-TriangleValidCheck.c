#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
        printf("Triangle is valid");
    else
        printf("Triangle is NOT valid");

    return 0;
}

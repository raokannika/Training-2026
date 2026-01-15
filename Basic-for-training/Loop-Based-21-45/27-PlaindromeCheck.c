#include <stdio.h>

int main() {
    int num, temp, rev = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    if (temp == rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome");

    return 0;
}

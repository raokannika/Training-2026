#include <stdio.h>

int main() {
    int num, min = 9, digit;

    printf("Enter number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        if (digit < min)
            min = digit;
        num /= 10;
    }

    printf("Smallest digit = %d", min);
    return 0;
}

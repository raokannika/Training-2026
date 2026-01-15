#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while (num != 0) {
        if ((num % 10) % 2 == 0)
            count++;
        num /= 10;
    }

    printf("Even digits count = %d", count);
    return 0;
}

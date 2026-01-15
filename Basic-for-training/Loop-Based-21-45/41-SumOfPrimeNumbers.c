#include <stdio.h>

int main() {
    int n, i, j, flag, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        flag = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            sum += i;
    }

    printf("Sum of primes = %d", sum);
    return 0;
}

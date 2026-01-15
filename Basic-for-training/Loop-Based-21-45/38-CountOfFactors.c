#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }

    printf("Number of factors = %d", count);
    return 0;
}

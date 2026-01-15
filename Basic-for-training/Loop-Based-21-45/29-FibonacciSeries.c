#include <stdio.h>
int main() {
    int i, n;
    int t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Input should be greater than 0");
        return 0;
    }

    if (n == 1) {
        printf("Fibonacci Series: %d", t1);
        return 0;
    }

    printf("Fibonacci Series: %d, %d", t1, t2);

    for (i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
/*
int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}*/

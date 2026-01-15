#include <stdio.h>

// int main() {
//     int n, i;
//     int a = 0, b = 1, c;

//     printf("Enter n: ");
//     scanf("%d", &n);

//     for (i = 2; i <= n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }

//     printf("Nth Fibonacci = %d", b);
//     return 0;
// }
#include <stdio.h>
int main() {
    int i, n;
    int t1 = 0, t2 = 1, nextTerm;

    for (i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("Nth Fibonacci = %d", t2);
    return 0;
}
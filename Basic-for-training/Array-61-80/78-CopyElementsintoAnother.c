#include <stdio.h>

int main() {
    int n, i, a[100], b[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }

    printf("Copied array: ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}

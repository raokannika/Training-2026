/*
    ABC
    AB
    A

*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter height: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 0; j < i; j++)
            printf("%c", 'A' + j);
        printf("\n");
    }
    return 0;
}

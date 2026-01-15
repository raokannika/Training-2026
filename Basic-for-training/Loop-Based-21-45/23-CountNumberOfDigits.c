#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while (num != 0) {
        printf("Count:%d\n",count);
        count++;
        num = num / 10;
        printf("\n%d\n",num);
    }

    printf("Number of digits = %d\n", count);
    return 0;
}

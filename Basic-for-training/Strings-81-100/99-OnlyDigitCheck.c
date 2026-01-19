#include <stdio.h>

int main() {
    char str[100];
    int i, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("String contains only digits");
    else
        printf("String does not contain only digits");

    return 0;
}

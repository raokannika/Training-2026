#include <stdio.h>

int main() {
    char str[100];
    int i, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("String contains only alphabets");
    else
        printf("String does not contain only alphabets");

    return 0;
}

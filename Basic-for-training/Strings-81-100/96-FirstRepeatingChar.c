#include <stdio.h>

int main() {
    char str[100];
    int freq[256]={0}, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] == 1) {
            printf("First repeating character: %c", str[i]);
            break;
        }
        freq[str[i]]++;
    }

    return 0;
}

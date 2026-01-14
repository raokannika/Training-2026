#include <stdio.h>

void main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("ntered character is an Alphabet");
    else if (ch >= '0' && ch <= '9')
        printf("Entered character is a Digit");
    else
        printf("ntered character is a Special character");

}

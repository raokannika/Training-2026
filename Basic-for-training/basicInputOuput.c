#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Reading integers and performing operations */
    int a, b, c;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Entered number: %d\n", a);

    printf("Enter two numbers: ");
    scanf("%d %d", &b, &c);

    printf("Sum: %d\n", b + c);
    printf("Difference: %d\n", b - c);
    printf("Product: %d\n", b * c);
    printf("Quotient: %d\n", b / c);
    printf("Remainder: %d\n", b % c);

    /* Printing ASCII value for a character */
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);   // space before %c is IMPORTANT

    printf("ASCII value of %c is %d\n", ch, ch);

    /* Taking ASCII value and printing corresponding character */
    int asciiVal;
    printf("Enter an ASCII value: ");
    scanf("%d", &asciiVal);

    printf("Corresponding character for ASCII value %d is %c\n", asciiVal, asciiVal);

    /* Reading a float number */
    float num;
    printf("Enter a floating number: ");
    scanf("%f", &num);
    printf("Entered number with 2 decimals: %.2f\n", num);

    /* Reading a string (without spaces) */
    char str[50];
    printf("Enter a string (no spaces): ");
    scanf("%s", str);
    printf("Entered string: %s\n", str);

    /* Reading a string with spaces */
    char str2[50];
    printf("Enter a string (spaces allowed): ");
    getchar(); // clears newline buffer
    fgets(str2, sizeof(str2), stdin);
    printf("Entered string: %s", str2);

    /* Reading 3 numbers and printing average */
    float n1, n2, n3, avg;
    printf("Enter 3 numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    avg = (n1 + n2 + n3) / 3;
    printf("Average: %.2f\n", avg);

    return 0;
}

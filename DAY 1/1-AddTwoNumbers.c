#include <stdio.h>
int main()
{
    float num1, num2;
    do
    {
        printf("Enter first number: ");
        while (1)
        {
            if (scanf("%f", &num1) != 1)
            {
                printf("Invalid Input for first number.");
                return 1;
            }
            // return 1;
            // continue;
        }
        printf("Enter second number: ");
        while (1)
        {
            // printf("Enter second number: ");     
            if (scanf("%f", &num2) != 1)
            {
                printf("Invalid Input for first number.");
                return 1;
            }
            printf("Sum: %f", num1 + num2);
        }
    }while(1);

    return 0;
}

#include <stdio.h>

int main()
{
    float num1, num2, sum;
    int input_status;

    while (1)
    {
        printf("Enter first number: ");
        input_status = scanf("%d", &num1);
        if (input_status == 1)
        {
            break;
        }
        else
        {
            printf("Invalid first input. Please enter only integer.\n");
            while (getchar() != '\n')
                ;
        }
    }
    while (1)
    {
        printf("Enter second number: ");
        input_status = scanf("%d", &num2);

        if (input_status == 1)
        {
            break;
        }
        else
        {
            printf("Invalid second input. Please enter only integer.\n");
            while (getchar() != '\n')
                ;
        }
    }
    sum = num1 + num2;
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

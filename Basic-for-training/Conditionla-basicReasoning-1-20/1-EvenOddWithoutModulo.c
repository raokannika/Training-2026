#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d",&num);

    if(num&1)
        printf("Odd number");
    // Otherwise
    else
        printf("Even number");


    printf("\nWithout using Bitwise as well\n");
    int n;
    
    printf("Enter a number\n");
    scanf("%d",&n);
    
    if((n/2)*2==n)
        printf("Even number");
    else
        printf("Odd number");
    return 0;

}
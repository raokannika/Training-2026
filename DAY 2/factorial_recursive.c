#include<stdio.h>
int fact(int num)
{
    if(num>=1)
    {
        return num*fact(num-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int number = 0;
    printf("Enter a number: ");
    scanf("%d",&number);
    int factorail=fact(number);
    printf("Factorial of %d is: %d",number,factorail);
    return 0;
}
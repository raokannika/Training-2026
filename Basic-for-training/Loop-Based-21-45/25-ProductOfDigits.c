#include<stdio.h>
int main()
{
    int num, product =1 ;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        product *= num % 10;
        num = num / 10;
    }
    printf("Product of digits is : %d ",product);

    return 0;
}
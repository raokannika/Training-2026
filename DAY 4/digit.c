#include<stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int sum = 0;
    int rem = 0;
    int is_single=0;
    int num1=num;
    while(!is_single)
    {
        sum=0;
        while(num!=0)
        {
            rem= num % 10;
            sum += rem;
            printf("Sum when rem is %d: %d\n",rem,sum);
            num /= 10;
        }
        if(sum < 10)
        {
            is_single=1;
        }
        else
        {
            num=sum;
        }
    }
    printf("the last single sum of %d is : %d",num1,sum);
}
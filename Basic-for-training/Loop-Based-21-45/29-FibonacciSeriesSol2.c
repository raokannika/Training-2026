#include <stdio.h>
// using function
int series(int n)
{
    int fib1 = 0, fib2 = 1, fib3[n];
    if (n == 1)
    {
        printf("%d\n", fib1);
        return 1;
    }
    else if (n == 2)
    {
        printf("%d\n%d\n", fib1, fib2);
        return 1;
    }
    else
    {
        printf("%d\n%d\n", fib1, fib2);
        for (int i = 3; i <= n; i++)
        {
            fib3[i] = fib1 + fib2;
            printf("%d\n", fib3[i]);
            fib1 = fib2;
            fib2 = fib3[i];
        }
        return fib3[n];
    }
}
int main()
{
    int n;
    printf("Enter Number of iteration: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Iteration should be greater than 0");
        return 1;
    }
    series(n);

    return 0;
}
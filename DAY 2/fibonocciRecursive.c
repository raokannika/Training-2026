#include <stdio.h>

void printFib(int n) {
  
    if (n < 1) {
        printf("Invalid Number of terms\n");
        return;
    }
  
    int fib1 = 1;
    int fib2 = 0;


    for (int i = 1; i <= n; i++) {
      	

        if (i==1) {
            printf("%d ", fib2);
            
        }
		else if (i == 2)
            printf("%d ", fib1);
        else 
        {
            int fib3 = fib1 + fib2;
            fib2 = fib1;
            fib1 = fib3;
            printf("%d ", fib3);
        }
            
    }
}

int main() {
    int number = 0;
    printf("Enter a number: ");
    scanf("%d",&number);
    printFib(number);
    return 0;
}
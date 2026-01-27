#include <stdio.h>

int main() {
    int numberDeno = 0;
    int value = 0;
    int count = 0;
    printf("Enter Number of coin denomination: ");
    scanf("%d",&numberDeno);
    int coinDeno[numberDeno];
    printf("Enter Coin denomination in descending order: \n");
    for(int i=0 ; i<numberDeno ; i++)
    {
        scanf("%d",&coinDeno[i]);
    }
    printf("Enter value to make: ");
    scanf("%d",&value);
    int sum=0;
    int minCoin=0 ;

    for (int i = 0; i < numberDeno; i++) {
        int count = 0;
        while (value >= coinDeno[i]) {
            value -= coinDeno[i];
            count++;
            minCoin++;
        }
        if(count>0)
            printf("%d x %d\n", coinDeno[i], count);
        if (value == 0) break;
    }
    printf("\nTotal minimum number of coins: %d\n", minCoin);
}
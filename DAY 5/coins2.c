#include <stdio.h>

int main() {
    
    int coinDenomination = 0;
    
    printf("Enter number of coin Denomination: ");
    scanf("%d", &coinDenomination);
    
    int coin[coinDenomination];
    
    printf("Enter coin denomination in descending order: ");
    for(int i = 0; i < coinDenomination; i++){
        scanf("%d", &coin[i]);
    }
    
    int value = 0;
    printf("Enter value to make: ");
    scanf("%d", &value);
    
    int count = 0;
    int minCoins = 0;
    printf("\nCoins Used:\n");
    for(int i = 0; i < coinDenomination; i++){
        if(value >= coin[i]){
            count = value / coin[i]; 
            value = value % coin[i]; 
            minCoins += count;
            printf("%d x %d\n", coin[i], count);
        }
    }
    printf("\nMinimum Coins used: %d", minCoins);
    

    return 0;
}
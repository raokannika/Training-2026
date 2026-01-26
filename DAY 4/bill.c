#include <stdio.h>

int main() {
    int quantity = 0;
    int discountInt=0;
    float price=0.0;
    float bill=0.0;
    float netAmount= 0.0;
    float discount=0.0;
    char name[100];
    printf("Enter name of th customer: ");
    scanf("%s",name);
    printf("Enter Price: ");
    scanf("%f",&price);
    printf("Enter Quantity: ");
    scanf("%d",&quantity);
    bill= price * quantity;
    if(bill>3000 && bill<=5000)
    {
        discountInt=10;
        discount=bill*10/100;
        netAmount=bill-discount;
        
    }
    else if(bill>5000)
    {
        discountInt=20;
        discount=bill*20/100;
        netAmount=bill-discount;
    }
    printf("\n------BILL------\n");
    printf("Customer Name : %s \nTotal Bill    : Rs %.2f\nDiscount(%d %) : Rs %.2f\nNet Amount    : Rs %.2f\n",name,bill,discountInt,discount,netAmount);
    return 0;
}
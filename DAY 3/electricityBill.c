#include<stdio.h>
void electricityBill(int units)
{
    int bill = 0;
    if(units<=100)
    {
        bill = 2*units;
    }
    else if(units>100 && units<=200){
        bill=2*100+3*(units-100);
    }
    else if(units>200 && units<=300)
    {
        bill=2*100+3*200+5*(units-200);
    }
    else {
        bill=2*100+3*200+5*300+ 6*(units=300);
    }
    printf("Electricity Bill for %d units is: %d",units,bill);
}
int main()
{
    int units=0;
    printf("Enter number of units: ");
    scanf("%d",&units);
    electricityBill(units);
    
}
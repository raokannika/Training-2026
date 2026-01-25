#include<stdio.h>
int main()
{
    int hours=0;
    printf("Enter number of hours: ");
    scanf("%d",&hours);
    if(hours<=3)
    {
        int charges = 40*hours;
        printf("Parking Charges is : %d\n",charges);
    }
    else{
        int charges=40*3+50*(hours-3);
        printf("Parking Charges is : %d\n",charges);
    }
}
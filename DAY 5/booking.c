#include <stdio.h>

int main() {
    int seats = 0 , tickets=0;
    printf("Enter Total Seats: ");
    scanf("%d",&seats);
    while(seats>0)
    {
        printf("\nEnter Number of tickets: ");
        scanf("%d",&tickets);
        if(tickets>seats)
        {
            printf("\nCannot Book Tickets. Only %d tickets remaining\n",seats);
        }
        else {
            printf("\n%d tickets booked\n",tickets);
            seats -= tickets;
            // printf("%d tickets are available\n", seats);
        }
    }
    printf("\n\n-----Booking Closed!!-----\n\n");

    return 0;
}
#include <stdio.h>
int main() {
    char moves[100];
    printf("Enter Moves: ");
    scanf("%s",moves);
    int x=0 , y=0;
    for(int i =0; moves[i] != '\0' ; i++)
    {
        if (moves[i]== 'R')
        {
            x += 1;
        }
        else if (moves[i] == 'L')
        {
            x -= 1;
        }
        else if (moves[i] == 'U')
        {
            y += 1;
        }
        else if (moves[i] == 'D')
        {
            y -= 1;
        }
        
    }
    printf("Position:(%d,%d)",x,y);
    
    return 0;
}
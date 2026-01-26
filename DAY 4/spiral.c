#include<stdio.h>
int main()
{
    int size=0 , rowSize=0, colSize=0;
    printf("Enter row size: ");
    scanf("%d",&rowSize);
    printf("Enter row size: ");
    scanf("%d",&colSize);
    int matrix[rowSize][colSize];
    printf("Enter matrix Element: ");
    for(int i=0; i<rowSize ; i++)
    {
        for (int j=0; j<colSize ;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int rowStart=0, colStart=0,  count=0;
    int rowEnd=rowSize-1;
    int colEnd=colSize-1;
    int numberElements=rowSize*colSize;
    printf("Spiral Order: ");
    while(count<numberElements)
    {
        for(int i = colStart ; i<=colEnd && count<numberElements ; i++)
        {
            printf("%d ",matrix[rowStart][i]);
            count ++;
        }
        rowStart += 1;
        for(int i = rowStart; i<=rowEnd  && count<numberElements; i++)
        {
            printf("%d ",matrix[i][colEnd]);
            count ++;
        }
        colEnd -= 1;
        for(int i = rowEnd; i>=rowStart && count<numberElements; i--)
        {
            printf("%d ",matrix[rowEnd][i]);
            count ++;
        }
        rowEnd -= 1;
        for(int i=colEnd ; i>=colStart && count<numberElements ; i--)
        {
            printf("%d ",matrix[i][colStart]);
            count ++;
        }
        colStart += 1;
    }
    printf("\n");
    return 0;
}



/*
#include <stdio.h>

int main() {
    int rowSize = 0, colSize = 0;

    printf("Enter row size: ");
    scanf("%d", &rowSize);
    printf("Enter column size: ");
    scanf("%d", &colSize);

    int matrix[rowSize][colSize];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            // Added & here to fix the crash
            scanf("%d", &matrix[i][j]); 
        }
    }

    int rowStart = 0, colStart = 0;
    int rowEnd = rowSize - 1;
    int colEnd = colSize - 1;
    int count = 0;
    int totalElements = rowSize * colSize;

    printf("Spiral Order: ");
    while (count < totalElements) {
        
        // 1. Traverse Left to Right (Top Row)
        for (int i = colStart; i <= colEnd && count < totalElements; i++) {
            printf("%d ", matrix[rowStart][i]);
            count++;
        }
        rowStart++; // Move the top boundary down

        // 2. Traverse Top to Bottom (Right Column)
        for (int i = rowStart; i <= rowEnd && count < totalElements; i++) {
            printf("%d ", matrix[i][colEnd]);
            count++;
        }
        colEnd--; // Move the right boundary left

        // 3. Traverse Right to Left (Bottom Row)
        for (int i = colEnd; i >= colStart && count < totalElements; i--) {
            printf("%d ", matrix[rowEnd][i]);
            count++;
        }
        rowEnd--; // Move the bottom boundary up

        // 4. Traverse Bottom to Top (Left Column)
        for (int i = rowEnd; i >= rowStart && count < totalElements; i--) {
            printf("%d ", matrix[i][colStart]);
            count++;
        }
        colStart++; // Move the left boundary right
    }

    printf("\n");
    return 0;
}*/
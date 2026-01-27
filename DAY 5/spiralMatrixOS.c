/*Given an m x n matrix, return all elements in spiral order.
# Input: [[1,2,3],[4,5,6],[7,8,9]]
# Output: [1,2,3,6,9,8,7,4,5]*/
#include <stdio.h>

// Pass rowSize and colSize before the matrix so the compiler knows the dimensions
void spiral(int rowSize, int colSize, int matrix[rowSize][colSize], int rowStart, int colStart, int count, int rowEnd, int colEnd, int numberElements)
{
    printf("Row Start: %d\n",rowStart);
    printf("Col End: %d\n",colEnd);
    printf("Row End: %d\n",rowEnd);
    printf("Col Start: %d\n",colStart);
    while (count < numberElements)
    {
        // 1.Traverse Right
        for (int i = colStart; i <= colEnd && count < numberElements; i++)
        {
            printf("%d ", matrix[rowStart][i]);
            count++;
        }
        rowStart += 1;
        printf("\nRow Start: %d\n",rowStart);
        // 2.Traverse Down
        for (int i = rowStart; i <= rowEnd && count < numberElements; i++)
        {
            printf("%d ", matrix[i][colEnd]);
            count++;
        }
        colEnd -= 1;
        printf("\nCol End: %d\n",colEnd);
        // 3.Traverse Left
        for (int i = colEnd; i >= colStart && count < numberElements; i--)
        {
            printf("%d ", matrix[rowEnd][i]);
            count++;
        }
        rowEnd -= 1;
        printf("\nRow End: %d\n",rowEnd);

        // 4.Traverse Up
        for (int i = rowEnd; i >= rowStart && count < numberElements; i--)
        {
            printf("%d ", matrix[i][colStart]);
            count++;
        }
        colStart += 1;
        printf("\nCol Start: %d\n",colStart);
    }
    printf("\n");
}

int main()
{
    int rowSize = 0, colSize = 0;
    
    printf("Enter row size: ");
    scanf("%d", &rowSize);
    printf("Enter column size: ");
    scanf("%d", &colSize);

    int matrix[rowSize][colSize];
    
    printf("Enter matrix Elements:\n");
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int rowStart = 0, colStart = 0, count = 0;
    int rowEnd = rowSize - 1;
    int colEnd = colSize - 1;
    int numberElements = rowSize * colSize;

    printf("Spiral Order: ");
    //matrix is passed after dimensions,else you will get error, like red line under matrix
    spiral(rowSize, colSize, matrix, rowStart, colStart, count, rowEnd, colEnd, numberElements);

    return 0;
}
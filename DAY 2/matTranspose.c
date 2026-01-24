#include<stdio.h>
int main()
{
    int row=0 , col=0;

    printf("Enter the number of rows of a matrix: ");
    scanf("%d",&row);
    printf("Enter the number of coulumns of a matrix: ");
    scanf("%d",&col);
    int mat[row][col];
    printf("Enter matrix elements: ");
    for(int i=0 ;i<row; i++)
    {
        for(int j =0 ; j<col; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix Transpose: \n");
    for(int i=0 ;i<row; i++)
    {
        for(int j =0 ; j<col; j++)
        {
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }

}
#include<stdio.h>
int main()
{
    int row=0 , col=0;

    printf("Enter the number of rows of a matrix: ");
    scanf("%d",&row);
    printf("Enter the number of coulumns of a matrix: ");
    scanf("%d",&col);
    int mat1[row][col];
    int mat2[row][col];
    int mat3[row][col];
    printf("Enter matrix 1 elements: ");
    for(int i=0 ;i<row; i++)
    {
        for(int j =0 ; j<col; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter matrix 2 elements: ");
    for(int i=0 ;i<row; i++)
    {
        for(int j =0 ; j<col; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0 ;i<row; i++)
    {
        for(int j =0 ; j<col; j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

    printf("Matrix Addition: \n");
    for(int i=0 ;i<row; i++)
    {
        for(int j =0 ; j<col; j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }

}
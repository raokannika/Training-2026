/*
#include <stdio.h>
int main() {
    int rows=0 , cols=0;
    printf("Enter Number of Rows: ");
    scanf("%d",&rows);
    printf("Enter Number of columns: ");
    scanf("%d",&cols);
    int mat[rows][cols];
    int sort[rows][cols];
    printf("Enter Matrix Elements: \n");
    for(int i=0 ; i<rows ; i++)
    {
        for(int j=0 ; j<cols ; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0 ; i<rows ; i++)
    {
        for(int j=0 ; j<cols ; j++)
        {
            if(mat[i][j] > mat[i][j+1])
            {
                sort[i][j]=mat[i][j+1];
            }
        }
    }
    printf("Sorted Mtarix: \n");
    for(int i=0 ; i<rows ; i++)
    {
        for(int j=0 ; j<cols ; j++)
        {
            printf("%d ",sort[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
#include <stdio.h>
int main() {
    int rows=0 , cols=0;
    printf("Enter Number of Rows: ");
    scanf("%d",&rows);
    printf("Enter Number of columns: ");
    scanf("%d",&cols);
    int mat[rows][cols];
    int sort[rows][cols];
    int arr[rows*cols];
    int idx=0;
    printf("Enter Matrix Elements: \n");
    for(int i=0 ; i<rows ; i++)
    {
        for(int j=0 ; j<cols ; j++)
        {
            scanf("%d",&mat[i][j]);
            arr[idx++]=mat[i][j];
        }
    }
    for(int i=0 ; i<rows*cols ; i++)
    {
        for(int j=i+1 ; j<rows*cols ; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    idx=0;
    printf("Sorted Mtarix: \n");
    for(int i=0 ; i<rows ; i++)
    {
        for(int j=0 ; j<cols ; j++)
        {
            mat[i][j]=arr[idx++];
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
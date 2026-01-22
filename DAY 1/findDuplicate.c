#include <stdio.h>
void duplicate(int size, int arr[])
{
    // printf("Duplicate: ");
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             printf("%d ", arr[j]);
    //             break;
    //         }
    //     }
    // }

    int visited[size];
    for(int i = 0; i< size ; i ++)
    {
        visited[i]=0;
    }
    printf("Duplicate Elements : ");
    for(int i =0 ; i< size ; i++)
    {
        if(visited[i]==1)
        {
            continue;
        }
        int isDuplicate=0;
        for(int j = i + 1 ; j< size ; j++)
        {
            if(arr[i]==arr[j])
            {
                isDuplicate=1;
                visited[j]=1;
            }
        }
        if(isDuplicate)
        {
            printf("%d ",arr[i]);
        }
        
    }
    printf("\n");

}
int main()
{
    int size = 0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Elements are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    duplicate(size, arr);
    return 0;
}
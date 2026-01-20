#include <stdio.h>
void duplicate(int n, int arr[])
{
    printf("Duplicate: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d, ", arr[j]);
                break;
            }
        }
    }
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

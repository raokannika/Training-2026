#include<stdio.h>
int reverse(int n, int arr[])
{
    int temp=0;
    for(int i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    return arr[n];
}
int main()
{
    int size=0, i=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Array Elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nBefore Reversing array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nReversing\n");
    reverse(size,arr);
    printf("After Reversing the array: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
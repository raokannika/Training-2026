/*Given two arrays, arr1 and arr2,
  check whether arr2 is a subset of arr1
  (i.e., all elements of arr2 are present in arr1)*/

#include<stdio.h>

int subset(int size1, int size2, int arr1[], int arr2[])
{
    int flag =0;
    for(int i =0 ; i<size1 ; i++)
    {
        for(int j=0 ; j< size2 ;j++)
        {
            if(arr2[i]==arr1[j])
            {
                flag = 1;
                break;
            }
            else {
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Array 2 is a subset of array 1\n");
    }
    else {
        printf("Array 2 is not a subset of array 1\n");
    }
}

int main()
{
    int size1=0 , size2=0;
    printf("Enter the size of the array 1: ");
    scanf("%d",&size1);
    int arr1[size1];
    printf("Enter the size of the array 2: ");
    scanf("%d",&size2);
    int arr2[size2];

    if(size2 > size1)
    {
        printf("Array 2 is not subset of Array 1 because size of array 1 is less than size of array 2\n");
        return 0;
    }
    
    printf("Enter array1 elements : ");
    for(int i=0 ; i<size1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter array2 elements: ");
    for(int i=0 ; i<size2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    subset(size1, size2, arr1, arr2);
    return 0;
}
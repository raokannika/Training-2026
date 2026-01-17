#include <stdio.h>
#include <limits.h> // For INT_MIN

int main()
{
    int size, i;
    int max1, max2;

    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = INT_MIN;


    for(i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
            /*
              If current element of the array is first largest
              then make current max as second max and then max as current array element
             */
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            /*
               If current array element is less than first largest
               but is greater than second largest then make it second largest
             */
            max2 = arr[i];
        }
    }

    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);

    return 0;
}
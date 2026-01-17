#include <stdio.h>
#include <limits.h>   // For INT_MAX

#define MAX_SIZE 1000   // Maximum array size

int main()
{
    int arr[MAX_SIZE], size, i;
    int min1, min2;

    printf("Enter size of the array (1-1000): ");
    scanf("%d", &size);

    if (size < 2)
    {
        printf("Second smallest element not possible.");
        return 0;
    }

    printf("Enter elements in the array: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize smallest and second smallest
    min1 = min2 = INT_MAX;

    for(i = 0; i < size; i++)
    {
        if(arr[i] < min1)
        {
            /*
              If current element is the smallest,
              shift previous smallest to second smallest
            */
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i] < min2 && arr[i] > min1)
        {
            /*
              If element is greater than smallest
              but smaller than second smallest
            */
            min2 = arr[i];
        }
    }

    printf("First smallest = %d\n", min1);
    printf("Second smallest = %d", min2);

    return 0;
}

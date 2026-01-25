/*Given an integer array move all zeros
  to the end*/
#include <stdio.h>
int main()
{
    int size = 0;
    printf("Enter Size of the array: \n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        if (arr[left] == 0)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            right--;
        }
        else
        {
            left++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
/*
#include <stdio.h>

int main() {
    int size = 0;
    printf("Enter Size of the array: \n");
    scanf("%d", &size);

    int arr[size];
    printf("Enter Array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            j++;
        }
    }

    printf("Modified Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/
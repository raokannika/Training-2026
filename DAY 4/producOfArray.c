#include <stdio.h>
int product(int size, int nums[])
{
    int ans[size];
    ans[0]=1;
    for (int i = 1; i < size; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int suffix = 1;
    for (int i = size - 2; i >= 0; i--)
    {
        
        suffix *= nums[i + 1];
        ans[i] *= suffix;
        
    }

    // return ans;
    for(int i=0 ; i<size; i++)
    {
        printf("%d ",ans[i]);
    }
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int nums[size];
    
    printf("Enter array elements: ");
    for(int i=0 ; i<size; i++)
    {
        scanf("%d",&nums[i]);
    }
    product(size,nums);
    return 0;
}
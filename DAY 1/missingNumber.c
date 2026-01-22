// #include<stdio.h>
// int main(){
//  int a[100],n,i=0,j=0,num=0,flag=0;
//  printf("Enter size of the array: ");
//  scanf("%d",&n);
//  printf("*---------*\n");
//  printf("Enter array elements in the range not exceeding %d: ",n);
//  for(i=0;i<n;i++){
//     scanf("%d",&a[i]);
//  }
//  for(i=0;i<n;i++){
//     printf("%d\t",a[i]);
//  }
//   printf("\n*---------*\n");
//  for(i=0;i<n;i++){
//     flag=0;
//     num=i+1;
//     for(j=0;j<n;j++){
//         if(num==a[j]){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0){
//     printf("missing: %d \n",num);
//     }
//  }
//  return 0;

// }

#include <stdio.h>
void missingElement(int n, int arr[])
{
    int x1 = 0;
    int x2 = 0;

    for (int i = 1; i <= n + 1; i++) {
        x1 = x1 ^ i;
    }

    for (int i = 0; i < n; i++) {
        x2 = x2 ^ arr[i];
    }

    int missing_number = x1 ^ x2;

    printf("The missing number is: %d\n", missing_number);
}
int main() {
    int n;
    
    // N is the number of elements present in the array
    printf("Enter the size of the array (N): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a valid size.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements (between 1 and %d): ", n, n + 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    missingElement(n,arr);

    return 0;
}
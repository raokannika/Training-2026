#include<stdio.h>
#include <string.h>

int main() {
    char str[20];
    int count = 0;
    printf("Enter string: ");
    fgets(str, 20, stdin);
    printf("%s", str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
    }
    prinf("");
    return 0;
}

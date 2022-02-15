#include<stdio.h>
#include<string.h>
#define max_size 100
int main()
{
    char str[max_size],arr[max_size];
    int i;
    printf("Enter a string:");
    gets(str);
    strcpy(arr,str);
    strrev(str);
    if(strcmp(str,arr)==0)
    {
        printf("%s is palindrom string",arr);
    }
    else
    {
        printf("%s is not a palindrom string",arr);
    }
    return 0;
     
}
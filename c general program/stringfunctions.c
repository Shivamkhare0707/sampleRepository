#include<stdio.h>
#include<string.h>
void stringfunc(char str[],char arr[])
{
    printf("string length is %d\n",strlen(str));
    printf("string length is %d\n",strlen(arr));
     printf("comparasion bet two strings %d\n",strcmp(str,arr));
    printf("reverse of string is %s\n",strrev(str));
    printf("reverse of string is %s\n",strrev(arr));
    
    
}
int main()
{
    char str[50];
    char arr[50];
    printf("Enter first string:\n");
    gets(str);
    printf("Enter second string:\n");
    gets(arr);
    stringfunc(str,arr);
    return 0;
}
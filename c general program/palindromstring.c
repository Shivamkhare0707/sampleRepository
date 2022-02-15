#include<stdio.h>
#include<string.h>
#define max_size 100 
int main()
{
    char str[max_size];
    int length=0,i;
    printf("Enter a string:\n");
    gets(str);
    for( i=0;str[i]!='\0';i++)
    {
        length++;
    }
    int mid=length/2;
    for( i=0;i<=mid-1;i++)
    {
         if(str[i]==str[length-i-1])
         {
             continue;
         }
         else
         {
             break;
         }
    }
    if(i==mid)
    {
        printf("%s is palindrom",str);
    }
    else
    {
        printf("%s is not a palindrom",str);
    }
}
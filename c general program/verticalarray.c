#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    char ch[max];
    printf("Enter a string");
    gets(ch);
    for(int i=0;i<strlen(ch);i++)
    printf("%c\n",ch[i]);
    //for(int i=0;i<100;)
}
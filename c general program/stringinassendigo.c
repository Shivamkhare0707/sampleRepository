#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    printf("Enter a string");
    gets(ch);
    for(int i=0;i<strlen(ch);i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }
}
#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("%c",ch+32);
    }
    else if(ch>=97&& ch<=122)
    {
        printf("%c",ch-32);
    }
    else
    {
        printf("it is not an alphabate");
    }
}
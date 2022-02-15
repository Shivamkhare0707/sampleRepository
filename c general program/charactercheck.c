#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the value of ch\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
    {
        printf("It is an alphabate");
    }
    else
    {
        printf("It is not an alphabate");
    }

}
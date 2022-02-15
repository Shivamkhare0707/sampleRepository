#include<stdio.h>
int ispalindrom(int n)
{
    int k=n;
    int reversed=0;
    while(n>0)
    {
        reversed=reversed*10 + n%10;
        n=n/10;
    }
    if(reversed==k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("ENter a nuber to check wheather it is palindrom or not:");
    scanf("%d",&n);
    if(ispalindrom(n))
    {
        printf("Enterd number is palindrom");
    }
    else
    {
        printf("Enterd number is not a palindrom");
    }
}
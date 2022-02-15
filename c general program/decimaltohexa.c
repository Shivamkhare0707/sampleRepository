#include<stdio.h>
int main()
{
    int n,a[10],i,sum=0,x;
    printf("Enter a decimal no to convert into hexadecimal:\n");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        x=n%16;
        if(x<10)
        {
            a[i]=48+x;
        }
        else
        {
            a[i]=55+x;
        }
        n=n/16;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}
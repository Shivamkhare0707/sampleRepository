#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[10],i;
    printf("Enter a decimal no. to convert into octal");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%8;
        n=n/8;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
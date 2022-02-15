#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter any 5 integers:");
    for(int i=1;i<=5;i++)
    {
       scanf("%d",&a[i]);
    }
    for(int i=5;i>0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
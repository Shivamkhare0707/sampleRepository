#include<stdio.h>
int main()
{
    int a[5],b[5],c[5];
    printf("Enter the value in first array");
    for(int i=0;i<5;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Enter the value in second array");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("sum of first and second array:");
    for(int i=0;i<5;i++)
    {
        printf(" %d",c[i]);
    }
    
    return 0;
}
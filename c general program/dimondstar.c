#include<stdio.h>
int main()
{
    int n,m=1;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=m;j++)
        {
            printf(" ");
        }
        for(int j=2*i-1;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
        m++;
    }

    
}
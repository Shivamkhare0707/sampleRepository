#include<stdio.h>
int main()
{
    int n,a=2;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
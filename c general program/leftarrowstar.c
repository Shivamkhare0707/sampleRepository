#include<stdio.h>
int main()
{
    int n,m,a=2;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    m=n*2-1;
    for(int i=1;i<=m;i++)
    {
        if(i<=n)
        {
         for(int j=n;j>=i;j--)
         {
            printf("*");
         }
         printf("\n");
        }
        else
        {
            for(int j=1;j<=a;j++)
            {
                printf("*");
            }
            a++;
            printf("\n");
        }
    }
}
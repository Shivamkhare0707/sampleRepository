#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    m=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*m-1;k++)
        {
           printf("*");
        }
        m--;
        printf("\n");
    }
}
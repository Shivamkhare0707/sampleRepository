#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            if(j==n||j==i||i==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no of rows you want");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int j=i;j<=n;j++)
        {
          if(i==1||i==n||j==n||j==i)
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
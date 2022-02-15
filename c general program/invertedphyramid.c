#include<stdio.h>
int main()
{
    int n,a=1;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
       for(int j=n*2;j>2*i-1;j--)
       {
           if(i==1||i==n||j==n*2||j==2*i)
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
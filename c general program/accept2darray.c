#include<stdio.h>
int main()
{
    int a[3][3],sum=0;
    printf("Enter 9 numbers in array:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("sum of rows:\n");
    for(int i=0;i<3;i++) 
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        printf("[%d]",sum);
        printf("\n");
        sum=0;
    }
    printf("sum of columns:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+a[j][i];
        }
       printf("[%d]\t",sum);
       sum=0;
    }
}
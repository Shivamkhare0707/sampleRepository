#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    m=n*2-1;
    int spaces=n;
    int star=n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=spaces;j++)
        {
            printf(" ");
        }
        for(int i=1;i<=star;i++)
        {
            printf("*");
        }
        if(i<n)
        {
            spaces=spaces-1;
            star=star-1;
        }
        else
        {
            spaces=spaces+1;
            star=star+1;
        }
        printf("\n");
    }
}
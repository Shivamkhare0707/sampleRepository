#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    int spaces=0;
    int star=n;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=0;j<spaces;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)
        {
            printf("*");
        }
        if(i<n)
        {
            spaces=spaces+1;
            star=star-1;
        }
        else
        {
            spaces=spaces-1;
            star=star+1;
        }
        printf("\n");
    }
}             
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i,j;
    printf("Enter many max star you want in a single row");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

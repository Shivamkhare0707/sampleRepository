#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i,j;
    printf("Enter no. of star you want to print in opposite direction");
    scanf("%d",&a);
    for(i=5;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}

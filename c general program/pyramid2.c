#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i,j;
    printf("Enter no. of stars you want to print in single line");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
       {
           printf("*");
       }
         printf("\n");
    }
    return 0;
}

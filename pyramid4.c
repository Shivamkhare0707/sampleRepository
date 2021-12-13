#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i,j,k,count=1;
    printf("Enter no. of star you want to print");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(count!=0)
            {
              for(k=(a-i);k>=1;k--)
              {
                printf(" ");
              }
              count--;
            }
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

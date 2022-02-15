#include<stdio.h>
#include<string.h>
int main()
{
    int a[3][3][3];
    printf("Enter numbers in 3d array:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                 scanf("%d",&a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("%d\t",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
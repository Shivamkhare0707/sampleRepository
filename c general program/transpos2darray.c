#include<stdio.h>
int main()
{
    int a[2][4];
    printf("Enter numbers in array:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }    
        printf("\n");
    }
    printf("transpose of the string:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    
}
#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the no. of column:");
    scanf("%d", &n);
    m = n * 2 - 1;
    for (int i = 1; i <= m; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(int j=m-i+1;j>=1;j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
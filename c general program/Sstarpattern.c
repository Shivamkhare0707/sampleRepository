#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the no. of rows");
    scanf("%d", &n);
    m = n + 1;
    for (int i = 1; i <= n; i++)
    {
        if (i <= m / 2)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == 1 || i == m / 2 || j == 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if(i==n)
                {
                    break;
                }
                if (j == n ||i==n-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
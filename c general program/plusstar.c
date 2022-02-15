#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the no. of rows");
    scanf("%d", &n);
    m = n + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == m / 2 || j==m/2)
            {
                printf("+");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
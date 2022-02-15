#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the no. of rows");
    scanf("%d", &n);
    m = n * 2 - 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j == i || j == (m - i) + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
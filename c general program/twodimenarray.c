#include <stdio.h>
int main()
{
    int a[300][300], i, j, rows, column;
    printf("Number of rows you want to print");
    scanf("%d", &rows);
    printf("number of columns you want to print");
    scanf("%d", &column);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        printf("\n"); 

        for (j = 0; j < column; j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
}
//program to print tringular star pattern by pressing either 0 or 1
#include <stdio.h>
int main()
{
    int n, i, j, a;
    printf("press 0 for tringular star pattern and 1 for reverse tringular star pattarn:");
    scanf("%d", &n);
    printf("number of star you want to print in the tringal:");
    scanf("%d", &a);
    if (n == 0)
    {
        for (i = 1; i <= a; i++)
        {
            for (j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (n == 1)
    {
        for (i = a; i > 0; i--)
        {
            for (j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("you didn't print either 0 or 1");
    }
    return 0;
}
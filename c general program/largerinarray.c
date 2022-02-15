#include <stdio.h>
int main()
{
    int i, j, a[100], n, fir_large, sec_large;
    printf("Enter the size of the array");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    fir_large = sec_large = a[0];
    for (i = 1; i < n; i++)
    {
        if (fir_large < a[i])
        {
            fir_large = a[i];
        }
    }
    for (j = 1; j < n; j++)
    {
        if (sec_large < a[j] && a[j] != fir_large)
        {
            {
                sec_large = a[j];
            }
        }
    }
    printf("%d %d", fir_large, sec_large);
}
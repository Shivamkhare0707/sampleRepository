#include <stdio.h>
#include <stdlib.h>

int hcf(int a, int b)
{
    int i;
    for ( i = a < b ? a : b; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            goto end;
        }
        else
        {
            continue;
        }
        
    }
    end:
    return i;
}

int main()
{
    int n = 5, Hcf = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0, j = 0; i < n && j <= n; i++)
    {
        Hcf = hcf(arr[i], arr[j + i]);
        if (Hcf == 1 && arr[i] > arr[j + i])
        {
            printf("%d", i);
            goto end;
        }
        else
        {
            continue;
        }
    }
end:
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, i;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        for (i = 2; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                printf("LCF=%d", i);
            }
        }
    }
    else
        {
          for(i = 2; i <= b; i++)
          {
             if(a % i == 0 && b % i ==0)
             {
                 printf("LCF=%d",i);
             }
          }
        }
}    
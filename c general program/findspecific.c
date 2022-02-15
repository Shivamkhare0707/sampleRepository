#include <stdio.h>
int main()
{
    int arr[10], i;
    printf("Enter 9 same and 1 different no.");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
        if (arr[0] != arr[1])
        {
            a = arr[0];
            b = arr[1];
            for (int i = 0; i < 10; i++)
            {
                if (arr[i] == a)
                {
                    count++;
                }
                if(arr[i]==b)
                {
                    count1++;
                }
            }
            if(count>count1)
            {
                printf("%d",a);
            }
        }
        else
        {
            for(int i=0;i<10;i++)
            {
                if(arr[i]!=arr[i+1])
                {

                }
            }
        }
    }
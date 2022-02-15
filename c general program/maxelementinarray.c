#include<stdio.h>
int main()
{
    int a[10],max;
    printf("Enter 10 numbers in array");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=1;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        else
        {
            continue;
        }
    }
    printf("max element of the array is %d",max);
    return 0;
}
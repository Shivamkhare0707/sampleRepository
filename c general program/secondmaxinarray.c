#include<stdio.h>
int main()
{
    int a[10],max,second_max=0,third_max=0;
    printf("Enter 10 number in array:");
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
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]!=max&&second_max<a[i])
        {
             second_max=a[i];
        }
        else
        {
           continue;
        }
    }
    printf("second max is %d",second_max);
    return 0;
}
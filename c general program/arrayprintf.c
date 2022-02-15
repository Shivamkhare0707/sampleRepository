//program to accept 5 number in any array and print it
#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter five integers:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
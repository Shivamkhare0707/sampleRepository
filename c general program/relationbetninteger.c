#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("a is greater then b");
    }
    else if (a<b)
    {
     printf("a is less then b");
    }
    else
    {
        printf("a is equals to b");
    }
}
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a and b");
    scanf ("%d %d",&a,&b);
    printf("Before swapping the value of a=%d,and b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping the value of a =%d and b=%d",a,b);
    return 0;
}
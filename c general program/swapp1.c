#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b");
    printf("Value of a=");
    scanf("%d",&a);
    printf("Vlaue of b=");
    scanf ("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping value of a=%d,b=%d",a,b);

}
#include<stdio.h>
int main()
{
    float a=5.0,b=6.0;
    float *p=&a,*q=&b;
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("value of a is %4.2f and value of b is %4.2f",a,b);
}
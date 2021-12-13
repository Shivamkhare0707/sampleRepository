#include<stdio.h>
int main ()
{
    arithmaticope();
    relationalope();
    return 0;
}
int  arithmaticope()
{
     int a=10, b=5, c;
    c= a+b;
    printf("a + b= %d\n",c);
    c=a-b;
    printf("a - b= %d\n", c);
    c=a*b;
    printf("a * b= %d\n",c);
    c= a/b;
    printf("a / b= %d\n",c);
    c = a%b;
    printf("a % b= %d\n",c);
    return 0;
}
int relationalope()
{
    int x=20,y=4;
    printf("%d == %d is %d\n",x,y,x==y);
    printf("%d != %d is %d\n",x,y,x>=y);
    printf("%d > %d is %d\n",x,y,x>y);
    printf("%d < %d is %d\n",x,y,x<y);
    printf("%d <= %d is %d\n",x,y,x<=y);
    printf("%d >= %d is %d\n",x,y,x>=y);
    return 0;
}
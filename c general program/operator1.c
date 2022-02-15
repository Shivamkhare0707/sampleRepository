#include<stdio.h>
int main ()
{
    arithmaticope();
    relationalope();
    bitwiseope();
    logicalope();
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
    printf("\n%d == %d is %d\n",x,y,x==y);
    printf("%d != %d is %d\n",x,y,x>=y);
    printf("%d > %d is %d\n",x,y,x>y);
    printf("%d < %d is %d\n",x,y,x<y);
    printf("%d <= %d is %d\n",x,y,x<=y);
    printf("%d >= %d is %d\n",x,y,x>=y);
    return 0;
}
int bitwiseope()
{
  int a=23, b=56,c=2,d=3;
  printf("\n%d & %d = %d\n",a,b,a&b);//this is Bitwise and operation 
  printf("%d | %d = %d\n",a,b,a|b);//this is Bitwise or operation 
  printf("%d ^ %d = %d\n",a,b,a^b);//this is bitwise xor operation 
  printf("%d >> %d = %d\n",a,c,a>>c);//this is bitwise shift operation
  printf("%d << %d = %d\n",a,d,a<<d);//this is bitwise left shift operation
  printf("~%d = %d\n",d,~d);
  return 0;
}
int logicalope()
{
    int a=23,b=56;
    printf("\n%d && %d = %d\n",a,b,a&&b);
    printf("%d || %d = %d\n",a,b,a||b);
    printf("!%d = %d\n",b,!b);
    return 0;
}
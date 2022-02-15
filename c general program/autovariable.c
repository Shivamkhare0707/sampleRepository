//auto variables and local variables are the same 
#include<stdio.h>
 int sum=23;
int myfunc(int a,int b)
{
    extern int sum;
    // auto int sum=90;
     sum=a+b;
    return sum;
}
int main()
{
   
    register int sum=myfunc(3,4);
    printf("value of sum is %d",sum);
    return 0;

}
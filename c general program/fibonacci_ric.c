#include<stdio.h>
int fib_recursive(int n)
{
   static int n1=0,n2=1,n3;
   if(n>0)
   {
       n3=n1+n2;
       n1=n2;
       n2=n3;
       printf(",%d",n3);
       fib_recursive(n-1);
   }
   return 0;
}
int main()
{
    int n;
    printf("terms you want to print:");
    scanf("%d",&n);
    printf("%d,%d",0,1);
    fib_recursive(n-2);
    return 0;
}

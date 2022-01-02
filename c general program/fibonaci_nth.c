//I Have to ask this question from dharmesh
#include<stdio.h>
int fib_recursive(int n)
{
   if(n==1 || n==2)
   {
       return n-1;
   }
   else
   {
       return fib_recursive(n-1)+fib_recursive(n-2);
   }
}
int fibo_ittrative(int n)
{
    int a=0,b=1;
    for(int i=1;i<n;i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series:");
    scanf("%d",&number);
    printf("The value of fibbonacci number at position no %d using recursive \
    approach is %d\n",number,fib_recursive(number));
    printf("The value of fibbonacci number at position %d using ittrative \
    approch is %d",number,fibo_ittrative(number));   
    return 0;
}

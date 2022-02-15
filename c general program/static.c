#include<stdio.h>
int a=40;//here we have declare  a global variable which have low presedence than local variabl
int fun(/*int a*/)//this is formal argument \n
{ 
    static int x;
    x++;
    //int a;local variables and formal arguments can not be same
    //printf("the address of the a inside fun is %d \n",&a);
    return x;
}
int main()
{
    int a=9;//it is a local variable 
    // int val=fun(a);
    // val=fun(a);
    // int val=fun(a);
    printf("the address of a inside main is %d\n",&a);
    printf("value of val is %d\n",fun());
    printf("value of val is %d\n",fun());
    printf("value of val is %d\n",fun());
    return 0;
}
//form here i have learnt that formal and local variables are diffrent  
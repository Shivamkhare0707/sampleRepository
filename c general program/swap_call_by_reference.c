//program to swapp to numbers by using the call by vlaue functionality
#include<stdio.h>
int swapp(int* x, int* y)
{
    int temp;
    temp= *x;
    *x=*y;
    *y=temp;
    return 0;//where we do not need to return pointer variables 
}
int main()
{
    int a=10,b=20;
    swapp(&a,&b);//call by reference 
    printf("Value of a is %d and Value of b is %d",a,b);
    return 0;
}
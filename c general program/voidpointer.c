#include<stdio.h>
int main()
{
    int a=10;
    char ch='s';
    float f=10.34;
    double d=30.343;
    void* p;
    p=&a;
    printf("the value of a is %d\n",*((int*)p));
     p=&ch;
    printf("the value of ch is %c\n",*((char*)p));
      p=&f;
    printf("the value of f is %f\n",*((float*)p));
     p=&d;
    printf("the value of d is %lf\n",*((double*)p));
    return 0;
}  
 
   
    






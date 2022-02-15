#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=10;
    int* p=&a;
    printf("\nvalue of a is %d\n",a);
    printf("value of  is %d\n",p);
    printf("value of  is %d\n",--a);
    printf("\nvalue of  is %d\n",*p);
    return 0;
}

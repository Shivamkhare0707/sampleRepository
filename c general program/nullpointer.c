#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=100;
    int*ptr = NULL;//it is a null pointer
    if(ptr!=NULL)
    printf("the value of null pointer is = %d",*ptr);
    else
    {
        printf("the value of pointer is not a null");
    }
    return 0;
}

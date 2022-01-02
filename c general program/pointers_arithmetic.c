#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=10;
    int* pointer=&a;
    printf("\nvalue of a is %d\n",a);
    printf("value of pointer is %d\n",pointer);
    printf("value of pointer is %d\n",--pointer);
    printf("\nvalue of pointer is %d\n",pointer - 618640);
    return 0;
}

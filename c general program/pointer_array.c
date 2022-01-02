#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5] = {1,3,5,7,9};
    printf("%d",a[9]);
    //if we will print the value of any absent index of an array so it will print 0
    printf("The value at first  element of the arry is %d\n",a[0]);
    printf("The value at first  element of the arry is %d\n",*(&a[0]));
    printf("The value at first  element of the arry is %d\n",*(a));
    printf("The value at second element of the arry is %d\n",a[1]);
    printf("The value at second element of the arry is %d\n",*(&a[1]));
    printf("The value at second element of the arry is %d\n",*(a+1));
    printf("The value at second element of the arry is %d\n",(a[2]));
    printf("The value at second element of the arry is %d\n",*(a+2));
    printf("The value at second element of the arry is %d\n",*(&a[2]));

    printf("The address of first index of the arry %d\n",a);
    printf("The address of first index of the arry %d\n",&a[0]);
    printf("The address of first index of the arry %d\n",&a[2]);
    printf("The address of first index of the arry %d\n",(a+1));
    printf("The address of first index of the arry %d\n",a);
    printf("The address of first index of the arry %d\n",a);
    return 0;
}

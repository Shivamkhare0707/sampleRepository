#include<stdio.h>
int main()
{
    int a=10;
    int *b=&a;
    int **c=&b;
    int ***d=&c;
    int ****e=&d;
    int *****f=&e;
    int ******g=&f;
    int *******h=&g;
    //the size of the double pointer is 8 byte.
    printf("size of double pointer is %d\n",*b+**c+***d);
    //here we can see that we can also perform addition 
    //operations on the double and tripple pointers
     printf("size of double pointer is %d\n",**c);
      printf("size of double pointer is %d\n",***d);
}
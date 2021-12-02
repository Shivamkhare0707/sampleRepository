#include<stdio.h>
int positive()
{
     int a=0;
    for(a=0;a<=10000;a++)
    {
        printf("a=%d\n",a);
    }   
      return a;
}
int main()
{
    positive();
}


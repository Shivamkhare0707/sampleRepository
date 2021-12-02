#include<stdio.h>
int main()
{
    int a=10;
    printf("Enter any number");
    scanf("%d",&a);
    do
    {
      printf("a=%d",a);
      a--;
    }while(a<=10);
    return 0;
}
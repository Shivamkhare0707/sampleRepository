#include <stdio.h>
#include <stdlib.h>
int checkleep(int n)
{
   if (n % 4 == 0 && n % 100 != 0)
    {
        printf("The number is leep year");
    }
    else if (n % 100 == 0 && n % 400 == 0)
    {
        printf("this is a leep year");
    }
    else
    {
        printf("this is not a leep year");
    }
}
int main()
{
    int n;
    printf("Enter any year to check wheather it is leep or not");
    scanf("%d", &n);
    int (*fptr) (int);
    fptr=&checkleep;
    int d=(*fptr) (2000);
    printf("The value of %d is %d\n",d,n);
    return 0;
}

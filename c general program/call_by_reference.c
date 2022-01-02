//program to show the functionality of the call by reference 
#include <stdio.h>
int addition(int *x, int *y)
{
    int temp = *x;
    *x = *x + *y;
    *y = temp - *y;
    return 0;
}

int main()
{
    int a, b;
    printf("Enter the value of a and b");
    scanf("%d%d", &a, &b);
    addition(&a, &b);
    printf("The value of a is %d and the value of b is %d", a, b);
    return 0;
}
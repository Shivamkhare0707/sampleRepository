#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("using And bitwise operator between %d and %d = %d\n",a,b,a&b);
    printf("using OR bitwise operator berween %d and %d is %d\n",a,b,a|b);
    printf("using Xor birwise operator between %d and %d is %d\n",a,b,a^b);
    return 0;
}
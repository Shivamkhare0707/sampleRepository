#include<stdio.h>
int main()
{
    int a,b,i,gcd=0;
    printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;i++)
     {
       if(a%i==0 && b%i==0)
       gcd=i;
     }
     printf("The hcf of %d and %d = %d",a,b,gcd);
}
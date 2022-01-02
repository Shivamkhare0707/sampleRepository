#include<stdio.h>
/*int main()
{
    int n,i,sum=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        sum = (sum*i);
    }
    printf("Answer is :%d",sum);
    return 0;
}*/
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
    return 0;
}
int factorial(int a)
{
   if(a == 1 ||  a==0)
   {
       return 1;
   }
   else
   {
       return a*factorial(a-1);
   }
}
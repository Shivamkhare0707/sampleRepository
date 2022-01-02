//it is a ittrative mathod of solving fibonacci series 
#include<stdio.h>
int fibonacci(int n)
{
    int n1=0,n2=1,n3,i;
    for(i=n;i>0;i--)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf(",%d",n3);
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("terms you want to print:");
    scanf("%d",&n);
    printf("%d,%d",0,1);
    fibonacci(n-2);
    return 0;
}


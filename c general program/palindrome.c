#include<stdio.h>
int main()
{
    int n,x,sum=0,pro=1;
    printf("Enter any no.:");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        sum=sum+x;
        pro=pro*x;
        n=n/10;
    }
    if(sum%9== 0 && sum%6==0 && pro%9==0 && pro%6==0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}
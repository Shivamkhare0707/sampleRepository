#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    printf("Enter two numbers for calculating there hcf");
    scanf("%d%d",&a,&b);
    for(i=a<b?a:b;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            break;
        }
    }
    printf("HCF = %d",i);
    return 0;
}
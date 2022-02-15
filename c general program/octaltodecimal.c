#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,x;
    printf("Enter octal no. to convert into decimal");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        x=n%10;
        sum=sum+x*pow(8,i);
        n=n/10;
    }
    printf("%d",sum);
}
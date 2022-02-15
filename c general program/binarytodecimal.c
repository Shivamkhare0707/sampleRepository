#include<stdio.h>
#include<math.h>
int main()
{
    int x,sum=0;
    long n;
    printf("Enter binary no. to convert into decimal");
    scanf("%ld",&n);
    for(int i=0;n>0;i++)
    {
        x=n%10;
        sum=sum+x*pow(2,i);
        n=n/10;
    }
    printf("%d",sum);
}
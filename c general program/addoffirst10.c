#include<stdio.h>
int main()
{
     int a,i,sum=0;
    printf("ENTER A  POSITIV NO.");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
      sum=sum+i;
    }
    printf("sum of total no.=%d",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    int avg;
    printf("Enter 10 numbers to be sum");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum + arr[i];
    }
    printf("sum of numbers = %d",sum);
    avg = sum/10;
    printf("avrage of numbers = %f",avg);//agar ham integer variable
    //ki value ko %f format specifier ki help se print karvaynge to
    //ans 0 aayega

}
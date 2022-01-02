#include<stdio.h>
sum(x,y);
int main()
{
    int a,b,c;
    printf("Enter the value of a & b");
    scanf("%d%d",&a,&b);
    printf("%d",sum(a,b));//funtion passing the arguments
    return 0;
}
int sum(int x, int y)//function reseving the arguments in parameters
{
    return x+y;
}
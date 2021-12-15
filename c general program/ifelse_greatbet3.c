#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter three diffrent numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is greater then b&c");
    }
    if(b>a && b>c)
    {
        printf("b is greater then a&c");
    }
    if(c>a && c>b)
    {
        printf("c is greater then a & b");
    }
    if(a==b && a==c)
    {
        printf("all three numbers are equal");
    }
    return 0;
}

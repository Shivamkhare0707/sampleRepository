#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter your age ");
    scanf("%d",&a);
    printf("you have enterd %d as your age\n",a);
    if(a>=18)
    {
        printf("you can vote!");
    
    }
    else
    {
        printf("you can not vote");
    }

    return 0;
}

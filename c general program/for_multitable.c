/*Author:-shivam khare
purpose:- multinumber program
date:- 15/12/2021*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=0,i,j;
    printf("how many tables you want to print");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=10;j++);
        {
            printf("%d\t",(i*j));
        }
        printf("\n");
    }
    return 0;
}

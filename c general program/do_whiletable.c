#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i=1;
    printf("Enter any nonzero number");
    scanf("%d",&a);
    do{
        printf("%d * %d = %d\n",a,i,a*i);
        i++;
    }while(10);

    return 0;
}

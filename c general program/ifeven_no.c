#include<stdio.h>
int main()
{
    int number=0;
    printf("Enter any integer no.");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("\nnumber is even");
    }
    else
    {
        printf("no. is odd");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int Hindi,Chemistry,English,Maths,Physics,percentage;
    int sum=0;
    printf("Enter the Marks of Hindi:");
    scanf("%d",&Hindi);
    printf("Enter the Marks of English:");
    scanf("%d",&English);
    printf("Enter the Marks of Maths:");
    scanf("%d",&Maths);
    printf("Enter the Marks of Physics:");
    scanf("%d",&Physics);
    printf("Enter the Marks of Chemistry:");
    scanf("%d",&Chemistry);
    sum=Hindi+English+Maths+Physics+Chemistry;
    percentage = (sum*100)/500;
    if (80<=percentage<=100)
         {
             printf("Merit");
         }
    else if (60<=percentage<=79)
         {
             printf("1st divison");
         }

    else if (50<=percentage<=59)
         {
             printf("2nd division");
         }

    else if(40<=percentage<=49)
         {
             printf("3rd division");
         }
    else
     {
         printf("Fail");
     }
    
}
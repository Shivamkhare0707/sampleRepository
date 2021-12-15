/* Program to Calculate Grade According to marks
auther:-shivam khare
date:- 14/12/21*/
#include<stdio.h>
int main()
{
    int marks;
    printf("enter your markes");
    scanf("%d",&marks);

    if(marks<0 || marks>100)
    {
        printf("wrong entry");
    }
    
    else if(marks>=90)
           {
               printf("A+ grade");
           }
    else if(marks>=80 && marks<90)
           {
               printf("A grade"); 
           }
    else if(marks>=70 && marks<80)
           {
               printf("B grade");
           }   
    else if(marks>=60 && marks<70)
           {
               printf( "C grade");
           }
    else if(marks>=50 && marks<60)
           {
               printf("D grade");
           }
    else
    {
        printf("FAIL");
    }
}
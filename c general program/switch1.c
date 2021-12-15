#include<stdio.h>
int main()
{
    int  grade;
    puts("Enter your grade");
    puts("press 1 for A, 2 for B, 3 for C, 4 for D");
    scanf("%d",grade);
    switch(grade)
    {
        case 1:
          printf("your marks should be between 90 to 100");
          break;
        case 2:
          printf("your marks should be between 80 to 90");
          break;
        case 3:
           printf("your marks should be between 80 to 70");
          break; 
        default:
            printf("your marks are less then 70");
    }
    return 0;
}
/*Author :- Shivam khare
purpose :- calculate marks and age
date:- 16/12/21
*/
#include <stdio.h>
int main()
{
    int Age, marks;
    printf("Enter your age and marks");
    scanf("%d%d", &Age, &marks);
    switch (marks)
    {
    case 10:
        switch (Age)
        {
        case 5:
            printf("you age is 5 years");
            break;
        default:
            break;
        }
        break;
    case 20:
        printf("your marks is 20");
        break;
    case 30:
        printf("your marks is 30");
        break;

    default:
        printf("you have enterd wrong marks");
        break;
    }
}
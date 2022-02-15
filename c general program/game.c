#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define null 0
void rules()
{
    printf("\tRules Of The Game:-\n\n");
    printf("\t1.Rock Crushes The Scissor's Player Who Choose Rock, One Point Will Be Given To Him\n\n");
    printf("\t2.Paper Cover's The Rock Player Who Choose Paper Against The Rock, One Point Will Be Given To Him\n\n");
    printf("\t3.Scissor's Cuts The Paper Player Who Choose Scissor's, One Point Will Be Given To Him\n\n");
    printf("\tOnly Two Player's Can Play The Game One Will Be The Computer And Second Will Be The User!\n\n");
    printf("\t4.You Will Be Given Three Chances!\n\n");
    printf("\tScores Will Be Displayed At The End Of The Match\n\n");
}
int main()
{
    char name[50];
    int n, a = 0, i = 0, count = 0, count1 = 0;
    printf("\t--------------Welcom To The Game: Rock, Paper & Scissor----------------\n");
    rules();
    printf("Please Enter your name before starting the game:\n");
    scanf("%s", &name);
    printf("Player 1: %s\n", name);
    printf("Player 2: computer\n");
    system("cls");//this function is used to clear the screan
    while (i < 3)
    {
        printf("Player 1 Enter your choice\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. scissors\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            printf("Player 1:Rock\n");

            break;
        }
        case 2:
        {
            printf("Player 1:Paper\n");
            break;
        }
        case 3:
        {
            printf("Player 1:scissor\n");
            break;
        }
        default:
        {
            printf("you have chosse wrong input\n");
        }
        }
        srand(time(null));
        a = rand() % 2;
        switch (a)
        {
        case 0:
        {
            printf("Player 2:Rock\n");
            break;
        }
        case 1:
        {
            printf("Player 2:Paper\n");
            break;
        }
        case 2:
        {
            printf("Player 2:scissor\n");
            break;
        }
        default:
        {
            printf("you have chosse wrong input\n");
        }
        }
        if (n == 1 && a == 0)
        {
            printf("Draw\n");
        }
        else if (n == 1 && a == 1)
        {
            printf("Player 2: wins\n");
            count1++;
        }
        else if (n == 1 && a == 2)
        {
            printf("Player 1: wins\n");
            count++;
        }
        else if (n == 2 && a == 0)
        {
            printf("Player 1:wins\n");
            count++;
        }
        else if (n == 2 && a == 1)
        {
            printf("Draw\n");
        }
        else if (n == 2 && a == 2)
        {
            printf("Player 2: wins\n");
            count1++;
        }
        else if (n == 3 && a == 0)
        {
            printf("Player 2: wins\n");
            count1++;
        }
        else if (n == 3 && a == 1)
        {
            printf("Player 1: Wins\n");
            count++;
        }
        else if (n == 3 && a == 2)
        {
            printf("Draw\n");
        }
        i++;
    }
    if (count > count1)
    {
        printf("Player 1: wins finaly");
    }
    else if (count < count1)
    {
        printf("Player 2: wins finally");
    }
    else
    {
        printf("Game is draw");
    }
    return 0;
}
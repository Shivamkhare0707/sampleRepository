#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]%*c",str);//if we want to take input from the user 
                           // in the form of line so for that we can
                           // use scanset
    printf("Your string is:%s",str);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define null 0
int generaterandomno(int n)
{
   srand(time(null));
   return rand()%n;
}
int main()
{
    //srand(time(null));
    //srand(5);
    printf("the random number between 0 to 100 is %d\n",generaterandomno(100));
    return 0;
}



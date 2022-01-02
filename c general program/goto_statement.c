#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=10;i<=100;i+=10)
    {
       for(j=5;j<=50;j+=5)
       {
           printf("%d*%d=%d",i,j,i*j);
           goto i;//this statement is used to give control at the 
                    // any place of the program where we want .
       }
    }
     i:
    return 0;
}

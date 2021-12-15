/*Autor:-Shivam khare
purpose:- print matrix by using while loop
date:-15/12/21*/
#include<stdio.h>
int main()
{
    int row,column,k=1;
    printf("Enter no. of rows in matrix");
    scanf("%d",&row);
    printf("Enter no. of coloumn in matrix");
    scanf("%d",&column);
    int i=1;
    while(i<=row)
     {
         int j=1;
         while(j<=column)
         {
             printf("%d\t",k);//k variable ka use ham matrix ki values
             k++;              //print karvane ke liye karenge
             j++;
         }
         printf("\n");
         i++;
     }
}
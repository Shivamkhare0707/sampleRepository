#include<stdio.h>
int main()
{
    //[rows}{column} 
    int a[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};//declaration of 2d array
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }//end of j
    }//end of i
   return 0;
}
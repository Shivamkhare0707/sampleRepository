#include<stdio.h>
#include<string.h>
int main()
{
    int a[3][3],b[3][3],i,j,count=0;
    printf("Enter first string:\n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter second string:\n");
    for(int i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++) 
         {
             if(a[i][j]==b[i][3-j-1])
             {
                 count++;
             }
             else
             {
                //goto end;
                break;
             }
         }
    }
    //end:
    if( count==9)
    {
        printf("both the matrices are identical\n");
    }
    else
    {
        printf("Both the matrices are not identical");
    }
}
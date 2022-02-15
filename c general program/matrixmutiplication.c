#include<stdio.h>
int main()
{
    int n,m,n1,m1,i,j,k;
    printf("Enter the value of the rows and column you want in first matrix");
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
        //printf("\n");
    }
    printf("Enter the no. of rows and column you want in your array");
    scanf("%d%d",&n1,&m1);
    int b[n1][m1];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            scanf("%d",&b[i][j]);
        }
         printf("\n");
       
    }
if(m==n1)
{
    int c[n1][m1];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=0;
            {
                for(k=0;k<m;k++)
                {
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
            
        }
        printf("\n");
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
          printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
   
}
else
{
    printf("we can not performe matrix multiplication");
}

     return 0;
}


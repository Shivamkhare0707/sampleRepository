//it is a program to short the array by using the bubble short
#include<stdio.h>
int main()
{
    int i,j,temp;
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[j]<a[i])
            {
               temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
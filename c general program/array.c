#include<stdio.h>
int main()
{
    char a[4],i,size;
    size= sizeof(a)/sizeof(a[0]);
    printf("\nsize of array is %d",size);
    for(i=0;i<=3;i++)
    {
         printf("\nEnter the value of a[%d]",i);
        scanf("%d",&a[i]); 
    }
    for(i=0;i<=3;i++)
    {
      printf("[%d]",a[i]);
    }
    return 0;
}
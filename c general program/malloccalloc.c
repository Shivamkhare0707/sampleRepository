#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i;
    //use of malloc
    printf("Enter the size you want to create\n");
    scanf("%d",&n);
    /*ptr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter the value in the memory\n");
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("the value of the %d is %d \n",i,ptr[i]);
    }*/
    //use of the calloc()
    ptr=(int *)calloc(n,n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter the value in the \n");
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("The value of the %d is %d\n",i,ptr[i]);
    }
    printf("Enter the size you want to create for new array\n");
    scanf("%d",&n);
    ptr=(int *)realloc(ptr,n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter the values in the new array");
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("The value of the %d is %d \n",i,ptr[i]);
    }
    return 0;
}
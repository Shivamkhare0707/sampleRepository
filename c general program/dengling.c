#include<stdio.h>
#include <stdlib.h>
int *getdengling()
{
    int a=10;
    int *p=&a;
    return p;
}
int main()
{
    // case 1: this is the first way to of genereting dengling pointer
    int *dengptr1=(int *)malloc(7 * sizeof(int));
    dengptr1[0]=10;
    dengptr1[1]=20;
    dengptr1[2]=30;
    printf("%d\n",dengptr1[0]);
    free(dengptr1);
    printf("%d\n",dengptr1[0]);
   // case 2: this is the second way  of genereting dengling pointer
    int *dengptr2=getdengling();
    printf("%d\n",dengptr2);
    // case 3: this is the third way  of genereting dengling pointer
    int *dengptr3;
    {
        int b=20;
        dengptr3=&b;
    }
    printf("%d\n",*dengptr3);
}
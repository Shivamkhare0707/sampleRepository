/*formate specifiers is the way to tell the compiler what type of data 
  is in the variables are going to display on the output screen */
#include<stdio.h>
int main()
{
    int a=399;
    float a1=4.55;
    printf("THE value of a is %d & The value of a1 is %.2f\n",a,a1);
    printf("THE value of a is %d & The value of a1 is %.3f\n",a,a1);
    printf("THE value of a is %d & The value of a1 is %-10.2f this \n",a,a1);
    printf("THE value of a is %d & The value of a1 is %-10.2f this \n",a,a1);
    printf("THE value of a is %d & The value of a1 is %.2f\n",a,a1);
    return 0;
}

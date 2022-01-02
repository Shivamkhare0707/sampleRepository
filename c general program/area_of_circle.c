/*Author:- shivam khare
purpose:- pro. to find area of circle
date:- 16/12/21
*/
#include<stdio.h>
#define PI 3.14
int main()
{
   float r;
   double area;
   printf("Enter the radious of the circle");
   scanf("%f",&r);
   area= PI*r*r;
   printf("area of circle is %lf",area);
   return 0;
}
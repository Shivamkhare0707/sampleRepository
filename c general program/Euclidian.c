#include<stdio.h>
#include<math.h>
#define PI 3.14
float areaofcircle(float r)
{
  return PI*r*r;
}
int Edistance(int x1,int x2,int y1,int y2,float(*fptr)(float))
{
    int  a,b,d;
    float c;
    a=x2-x1;
    b=y2-y1;
    d=pow(a,2)+pow(b,2);
    c=(float)pow(d,0.5);
    printf("Eucledian distance=%.2f\n",c);
    printf("area of circle is %.2f\n",fptr(c));
}
int main()
{
    int x1,x2,y1,y2;
    printf("Enter the values of x1,x2,y1 and y2:\n");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    float (*ptr)(float);
    ptr=areaofcircle;
    Edistance(x1,x2,y1,y2,ptr);
    return 0;
}
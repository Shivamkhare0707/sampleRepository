#include<stdio.h>
int sub(int a,int b)
{
    return a-b;
}
int  greatgoodafternoon(int (*fptr)(int,int))
{
    printf("Good Afternoon!");
    printf("The subtraction of 7 to 5 is %d\n",fptr(7,5));
}
int  greatgoodevening(int (*fptr)(int,int))
{
    printf("Good evening!");
    printf("The subtraction of 7 to 5 is %d\n",fptr(7,5));
}
int main()
{
    int (*ptr)(int,int);
    ptr=sub;
    greatgoodafternoon(ptr);
     greatgoodevening(ptr);
    return 0;
}

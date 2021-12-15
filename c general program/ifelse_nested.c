/*pro. to find greater num from given three no.
auther:-shivam khare 
date:- 14/12/21*/
#include<stdio.h>
int main()
{
    int a=10,b=20,c=30;
    if(a>b)
    {
        if (a>c)
        {
            printf("a is greater then b&c"); 
        }
        else
        {
            printf("c is greater then a&b");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is greater then a&c");
        }
        else
        {
            printf("c is greater then a&c");
        }
    }
    return 0;
}
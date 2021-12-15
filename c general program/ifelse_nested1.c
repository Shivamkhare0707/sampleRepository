/*pro. to find greater no. from given four different numbers 
developed by shivam khare on 14/12/21*/
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter four different no.");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
           if(a>d)
           {
               printf("a is greater then b,c,d");
           }
           else
           {
               printf("d is greater then a,b,c");
           }
        }
        else
        {
            if(c>d)
            {
                printf("c is greater then a,b,d");
            }
            else
            {
                printf("d is greater then a,b,c");
            }
        }
    }    
     else
        {
            if(b>c)
            {
                if(b>d)
                {
                    printf("b is greater then a,c,d");
                }
                else
                {
                    printf("d is greater then a,b,c");
                }
            }
            else
            {
                if(c>d)
                {
                    printf("c is greater then a,b,d");
                }
                else
                {
                    printf("d is greater then a,b,c");
                }    
    
            } 
        }
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("The today's date is %s\n",__DATE__);
    printf("The current time is %s\n",__TIME__);
    printf("THe current Line no is %d\n",__LINE__);
    printf("ANSI :%d",__STDC__);
    return 0;
}
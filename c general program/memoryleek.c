#include<stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *p,i=0;
    while(i<444343)
    {
        printf("This is code for memory leeak");
        p= (int*) malloc(343443*sizeof(int));
        if(i%100==0)
        {
            getchar();
        }
    }
    return 0;
}

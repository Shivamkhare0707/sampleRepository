#include<stdio.h>
/*struct shivam
{
    int i;
    float marks;
    char a;
};*/
union shivam
{
    int i;
    float marks;
    char a;
};

int main()
{   
   // printf("%d ",sizeof(struct shivam)); 
    printf("%d ",sizeof(union  shivam));
    return 0;
}
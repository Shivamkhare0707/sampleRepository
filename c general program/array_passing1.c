#include<stdio.h>
int print(char *arr)
{
    for(int i=0;i<5;i++)
    {
        printf("%c ",arr[i]);
    }
    return 0;
}
int main()
{
    char arr[5]={'A','B','C','D','E'};
    print(arr);
    return 0;
}
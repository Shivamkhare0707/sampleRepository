#include<stdio.h>
#include  <string.h>
int main()
{
    char str[]="shivam";
    char str1[]={'s','a','t','y','a','m','\0'};
    char a,b;
    //puts(str);
    puts(strcat(str,str1));
    printf("the length of str is %d \n",strlen(str));
    printf("the length of str1 is %d \n",strlen(str1));
    return 0;
}

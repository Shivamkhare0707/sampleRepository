#include<stdio.h>
#include<string.h>
int parsar(char *string)
{
    int in=0,index=0;
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]=='<')
        {
            in=1;
            continue;
        }
        else if(string[i]=='>')
        {
            in =0;
            continue;
        }
        if(in==0)
        {
            string[index]=string[i];
            index++;
        }
    }
    string[index]='\0';
    ///for removing the spaces from the output string we will use swifting logic
    while(string[0]==' ')
    {
        for(int i=0;i<strlen(string);i++)
        {
            string[i]=string[i+1];
        }
    }
    while(string[strlen(string)-1]==' ')
    {
        string[strlen(string)-1]='\0';
    }
}
int main()
{
   char string[]="<h1nbnbfb>This is my string</h1>";
   parsar(string);
   printf("~~%s~~",string);
   return 0;
}
#include<stdio.h>

int main()
{
    FILE *ptr = NULL;
    char string[50]= "this file is created by me";
    //*********Reading a file***********
    ptr = fopen("readable.txt","r");
    fscanf(ptr, "%s", string);
    printf(" %s",string);

    //   //*********writing a file***********
    //   ptr = fopen("readable.txt","w");
    //   fprintf(ptr, "%s", string);

    //**************append a file**************
    // ptr = fopen("readable.txt", "a");
    // fprintf(ptr, "%s", string);
    fclose(ptr);
    return 0;
}
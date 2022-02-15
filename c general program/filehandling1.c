#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    // char string[40]="me hun jiyan me hun bada takatvar";
    ptr = fopen("readable.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("%s",string);
    // ptr = fopen("readable.txt","w");
    // fprintf(ptr, "%s" ,string);
    // printf("%s",string);
    // fputc('A',ptr);
    // fputs("this is a string",ptr);
    // char c = fgetc(ptr);
    // printf("%c", c);
    //  c = fgetc(ptr);
    // printf("%c", c);
    char str[30];
    // fgets(str,5,ptr);
    fgets(str, 5, ptr);
    printf("%s",str);
    // fclose(ptr);
}        
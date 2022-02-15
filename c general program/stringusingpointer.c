#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int vowel=0,consonant=0;
    printf("Enter a string");
    fgets(str,100,stdin);
    char *p=str;
    while(*p!='\0')
    {
        if(*p=='a'||*p=='e'||*p=='o'||*p=='i'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
        p++;
    }
    printf("Total no. of vowels in string is %d",vowel);
    printf("Total no of consonant in string is %d",consonant);
}
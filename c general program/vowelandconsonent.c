#include <stdio.h>
int main()
{
    char ch;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabate: ");
    scanf("%c", &ch);
    // evaluates to 1 if character is 
    lowercase_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uppercase_vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (lowercase_vowel || uppercase_vowel)
    {
        printf("%c is an alphabate", ch);
    }
    else 
    {
        printf("%c is a consonant", ch);
    }
    return 0;
    
}
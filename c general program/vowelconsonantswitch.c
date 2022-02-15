#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string:\n");
    gets(str);
    int vowel = 0, consonant = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            switch (str[i])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowel++;
                break;
            default:
                consonant++;
            }
        }
    }
    printf("Total no of vowel %d\n", vowel);
    printf("Total no of consonant %d\n", consonant);
}
#include <stdio.h>
#include <string.h>
#define max_size 1000
int main()
{
    char str[max_size];
    int words = 0, character = 0;
    printf("Write a paragraph:");
    scanf("%[^\n]%*c", str);
    for (int i = 0; i <= strlen(str); i++)
    {
        if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
        {
            if (i == 0 || str[i - 1] == ' ')
            {
                words++;    
            }
            character++;
        }
    }
    printf("Total words in paragraph is %d",words);
    printf("Total characters in paragraph is %d",character);
    return 0;
}

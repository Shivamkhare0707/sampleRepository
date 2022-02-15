#include <stdio.h>
#include <string.h>
#define max_size 100
void propercase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            if (i == 0 || str[i - 1] == ' ')
            {
                if (str[i] >= 97 && str[i] <= 122)
                {
                    str[i] = str[i] - 32;
                }
            }
            else
            {
                if (str[i] >= 65 && str[i] <= 90)
                {
                    str[i] = str[i] + 32;
                }
            }
        }
    }
    printf("%s", str);
}
int main()
{
    char str[max_size];
    printf("Enter a string:\n");
    gets(str);
    propercase(str);
    return 0;
}

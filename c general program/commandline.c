#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("The value of argc %d", argc);
    if (argc >= 2)
    {
        for (i = 0; i < argc; i++)
        {
            printf("the value is %s\t", argv[i]);
        }
    }
    return 0;
}

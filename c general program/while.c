/*program to terminate infinite loop*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0;
    while (1)
    {
        printf("%d", i);
        if (i == 9)
            break;
        i++;
    }
    return 0;
}

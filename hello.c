#include <stdio.h>

char* hello = "hello, world!\n";

int main()
{
    if (*hello != 0)
    {
        printf("%c", *hello);
        hello++;
        main();
    }
    return 0;
}

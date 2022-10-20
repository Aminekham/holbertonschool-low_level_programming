#include <stdio.h>
/**
 * 
 * 
 */
int main(int argc, char *argv[])
{
    int i;
    for (i = 1;i < argc;i++)
    {
        argv++;
    }
    printf("%d\n", i - 1);
    return (0);
}
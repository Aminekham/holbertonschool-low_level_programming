#include "main.h"
#include <string.h>
/**
 * 
 * 
 */
void print_rev(char *s)
{
    int L, i;

    L = strlen(s);
    for (i = L ; i >= 1; i--)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}

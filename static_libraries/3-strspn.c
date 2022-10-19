#include "main.h"
#include <string.h>
/**
 * 
 * 
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int r;
    int i, j, l1;
    l1 = strlen (s);
    j = 0;
    for (i = 0; i < l1; i++)
    {
        while (*(s + i) != ' ' && *(accept + j) != '\0')
        {
            if (*(s + i) == *(accept + j))
            {
                r = r + 1;
            }
            j++;
        }
        i++;
    }
    return (r);
}
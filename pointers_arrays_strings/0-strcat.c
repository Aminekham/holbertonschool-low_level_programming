#include "main.h"
#include <string.h>
/**
 * 
 * 
 */
char *_strcat(char *dest, char *src)
{
    int  len, i, mn;

    len = strlen (src);
    mn = strlen (dest);
    for (i = 0; i <= len; i++ )
    {
        dest[mn + i] = src [i];
    }
    return (dest);
}

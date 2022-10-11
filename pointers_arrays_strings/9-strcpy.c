#include "main.h"
#include <string.h>
/**
 * 
 * 
 */
char *_strcpy(char *dest, char *src)
{
    int i, l;

    l = strlen(src);
    for (i = 0; i <= l; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return(dest);
}

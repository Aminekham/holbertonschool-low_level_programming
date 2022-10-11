#include "main.h"
#include <string.h>
/**
 * 
 * 
 */
char *_strcpy(char *dest, char *src)
{
    int i, l;
    char *f;

    f = src;
    l = strlen(src);
    while (i != l)
    {
        *dest = *f;
        printf("%c",*dest);
         i++; 
         dest++;
         f++;
    }
    dest = '\0';
    return (dest);
}

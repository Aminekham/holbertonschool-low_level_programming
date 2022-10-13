#include "main.h"
#include <string.h>
/**
 * string_toupper : get it all to uppercase
 * 
 * @str: - the string to upper
 * 
 *  Return : the string fully upper
 */
char *string_toupper(char *str)
{
    int l, i;

    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        if (str[i] > 96 && str[i] < 123 )
        {
            str[i] = str[i] - 32;
        }
    }
    return (str);
}
#include "main.h"
/**
 * _strcmp - function to count the difference between the differences
 * 
 * @s1: - first string
 * 
 * @s2: - second string
 * 
 *  Return : difference between the last two characters
 */
int _strcmp(char *s1, char *s2)
{
    int r;
    if (*s1 == *s2)
        return (0);
    else
    {
        while (*s1 == *s2)
        {
            s1++;
            s2++;
        }
        r = *s1 - *s2;
        return (r);
    }
}

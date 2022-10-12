#include "main.h"
#include <string.h>
/**
 * _strncat - concat to n 
 * 
 * @dest: - string to concat in 
 * 
 * @src: - string to concat
 * 
 * @n: - integer to determinate how much we concat
 * 
 *  Return: the final string
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, mn;

	mn = strlen(dest);
	for (i = 0; i < n; i++)
	{
		dest[mn + i] = src[i];
	}
	return (dest);
}
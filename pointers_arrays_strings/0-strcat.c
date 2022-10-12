#include "main.h"
#include <string.h>
/**
 * _strcat - concat those two strings
 *
 * @dest: - string to save the whole process
 *
 * @src: - the first string
 * 
 * Return: the final string
 */
char *_strcat(char *dest, char *src)
{
	int len, i, mn;

	len = strlen(src);
	mn = strlen(dest);
	for (i = 0; i <= len; i++)
	{
		dest[mn + i] = src[i];
	}
	return (dest);
}

#include "main.h"
#include <string.h>
/**
 * _strcpy - a function that copy a string
 *
 * @dest: - a char to contain the copied thing
 *
 * @src: - the string to copy
 *
 *  Return: the copied string
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
	return (dest);
}

#include "main.h"
#include <string.h>
/**
 *_strncpy - the function to copy
 *
 * @dest: - char to define the copied string
 *
 * @src: - the source of the copying thing
 *
 * @n: -integer to save the length of the copied part
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

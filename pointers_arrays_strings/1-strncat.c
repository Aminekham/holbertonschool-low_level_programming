#include "main.h"
#include <string.h>
/**
 * _strcat - concat those two strings
 *
 * @dest: - string to save the whole process
 *
 * @src: - the first string
 *
 *  Return: the final string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
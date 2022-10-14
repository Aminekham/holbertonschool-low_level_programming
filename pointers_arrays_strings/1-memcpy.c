#include "main.h"
/**
 * _memcpy - function to copy from memory to memory
 *
 * @src: - the memory source
 *
 * @dest: - the memory destination
 *
 * @n: - the number of copying
 *
 * Return: return the destination variable
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

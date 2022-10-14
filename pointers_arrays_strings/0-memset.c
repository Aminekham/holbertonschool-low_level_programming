#include "main.h"
/**
 * _memset - set that char to the s
 *
 * @s: - memeory location to save the bytes
 *
 * @b: - byte to store
 *
 * @n: - unsigned integer to count
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	i = 0;
	while (i <= n)
	{
		*s = b;
		s++;
		i++;
	}
	return (s);
}

#include "main.h"
#include <string.h>
/**
 * _strpbrk - find the occurence
 *
 * @s: - the string to find in
 *
 * @accept: - the string to find any char within
 *
 * Return: s or null depends on what we find
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int j, l1;

	l1 = strlen(accept);
	while (*s != '\0')
	{
		for (j = 0; j < l1; j++)
		{
			if (*s == *(accept + j))
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

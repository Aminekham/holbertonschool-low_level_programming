#include "main.h"
#include <stddef.h>
/**
 * _strchr - find a char in a string
 *
 * @s: - a string to search in
 *
 * @c: - the char that we re searching for
 *
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}

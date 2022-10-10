#include "main.h"
/**
 * _strlen - length of a string
 *
 * @s: - the string itself
 * 
 * Return : i - 1
 */
int _strlen(char *s)
{
	int i, c;

	c = ' ';
	i = 0;
	while (c != '\0')
	{
		c = s[i];
		i = i + 1;
	}
	return (i - 1);
}

#include "main.h"
/**
 *_strlen_recursion - the value of the length of a string with recursion
 *
 * @s: - the string to count its length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

#include "main.h"
/**
 *_puts_recursion - funtion to do the work of puts with recursion
 *
 * @s: - the string to print
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}

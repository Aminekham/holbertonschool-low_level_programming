#include "main.h"
/**
 * _puts - printing a whole sentence
 *
 * @str: - the string used for saving that sentence
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	    _putchar(*str);
	    str++;
	}
	_putchar('\n');
}

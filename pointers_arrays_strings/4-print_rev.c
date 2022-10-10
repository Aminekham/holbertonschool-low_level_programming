#include "main.h"
#include <string.h>
/**
 * print_rev - this function was made to reverse a string
 *
 * @s: - a string to reverse
 */
void print_rev(char *s)
{
	int L, i;

	L = strlen(s);
	for (i = L - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

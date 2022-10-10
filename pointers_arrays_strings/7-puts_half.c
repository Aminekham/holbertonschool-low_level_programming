#include "main.h"
#include <string.h>
/**
 *puts_half- prints half of a string.
 *@str: pointer input
 * Return: void
 */
void puts_half(char *str)
{
	int l = strlen(str) - 1;
	int d = (l - 1) / 2;
	int e = l / 2;
	int i;

	if ((l % 2) == 0)
	{
		for (i = e + 1; i <= l; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = d + 1; i <= l; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

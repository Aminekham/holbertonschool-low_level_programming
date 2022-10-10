#include "main.h"
/**
 *puts_half- prints half of a string.
 *@str: pointer input
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str) - 1;
	int odd = (len - 1) / 2;
	int even = len / 2;
	int i;

	if ((len % 2) == 0)
	{
		for (i = even + 1; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = odd + 1; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

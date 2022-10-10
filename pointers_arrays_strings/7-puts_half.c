#include "main.h"
/**
 *puts_half - the half of the numbers
 *@str: pointer input
 */
void puts_half(char *str)
{
	int l = strlen(str) - 1;
	int d = (len - 1) / 2;
	int v = len / 2;
	int i;

	if ((l % 2) == 0)
	{
		for (i = v + 1; i <= l; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = d + 1; i <= l; i++)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}

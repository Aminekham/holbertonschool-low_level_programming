#include "main.h"

void jack_bauer(void)
{
	int i, j;

	for (i = 00; i <= 23; i++)
	{
		for (j = 00; j < 60; j++)
		{
			_putchar((i/10) + '0');
			_putchar((i%10) + '0');
			_putchar(':');
			_putchar((j/10) + '0');
			_putchar((j%10) + '0');
			_putchar('\n');
		}
	}
}
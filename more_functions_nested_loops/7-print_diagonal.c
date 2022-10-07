#include "main.h"
/**
 * print_diagonal - printing all numbers till 14
 *
 * @n: - integer to receive the number of lines
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
			_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}	
	else
	{
		_putchar('\n');
	}
}

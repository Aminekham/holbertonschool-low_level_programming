#include "main.h"
/**
 * print_square - printing all numbers till 14
 *
 * @size: - integer to receive the number of lines
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

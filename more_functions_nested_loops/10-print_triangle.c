#include "main.h"
/**
 * print_triangle - Do you want to print an inversed triangle
 * 
 * @size: - integer to receive the number of lines
*/
void print_triangle(int size)
{
	int i, j, n;
	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j= 1; j < size-i+1; j++)
			{
				_putchar(' ');
			}
			for (n= size-i; n < size; n++)
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

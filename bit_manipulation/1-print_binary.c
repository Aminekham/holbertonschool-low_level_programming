#include "main.h"
/**
 *print_binary - convert to binary
 *@n: integer to convert
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(0 + '0');
	}
	while (n > 0)
	{
		_putchar(n % 2 + '0');
		n = n / 2;
	}
}

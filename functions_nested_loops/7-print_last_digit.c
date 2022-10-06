#include "main.h"
/**
 *print_last_digit - Description: 'give the last digit'
 *
 * @n:  - integer to use
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
		int r = n % 10;

		if (r < 0)
		{
			r *= -1;
		}
		_putchar(r + '0');
		return (r);
}

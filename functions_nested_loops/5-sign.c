#include "main.h"
/**
 *print_sign - Description: 'give the sign'
 *
 * @n:  - integer to use
 *
 * Return: 0 or 1
 */
int print_sign(int n)
{
	if( n > 0 )
{
		_putchar('+');
		return (1);
}
	else if( n < 0)
{
		_putchar('-');
		return (-1);
}
	else
{
		_putchar('0');
		return (0);
}
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - to return the sum of arguments of this function
 *
 * @n: - the number of arguments
 *
 *Return: returns the sum of the arguments
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, s = 0;
	if (n == 0)
		return (0);
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		s = s + va_arg(p, int);
	}
	return (s);
}

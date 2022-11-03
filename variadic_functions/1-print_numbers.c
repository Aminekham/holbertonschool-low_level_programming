#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - printing the numbers donated as arguments
 *
 * @n: - the number of arguments
 *
 * @separator: - the seperator we should use
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(p, int));
		}
		else
		{
			printf("%d%c%c", va_arg(p, int),*separator, *(separator + 1));
		}
	}
	va_end(p);
}

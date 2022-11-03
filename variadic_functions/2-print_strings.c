#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
/**
 *print_strings - printing the strings passed as arguments
 *
 * @separator: - the separtor to use
 *
 * @n: - number of arguments
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *s = "";

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char *);
		if (separator == NULL)
		{
			separator = "";
		}
		if (s == NULL)
		{
			printf("nil");
		}
		if (i == n - 1)
		{
			printf("%s\n", s);
		}
		else
		{
			printf("%s%s", s, separator);
		}
	}
	va_end(p);
}

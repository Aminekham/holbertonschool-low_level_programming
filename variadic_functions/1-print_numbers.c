#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * 
 * 
 * 
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
            printf("%d\n",va_arg(p, int));
        }
        printf("%d%c ",va_arg(p, int),*separator);
    }
    va_end(p);
}
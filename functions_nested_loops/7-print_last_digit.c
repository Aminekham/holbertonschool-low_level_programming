#include "main.h"

int print_last_digit(int n)
{
        int r;

        r = (n % 10);
        if ( r < 0)
		{
			r *= -1
		}
		_putchar(r);
        return (r);

}

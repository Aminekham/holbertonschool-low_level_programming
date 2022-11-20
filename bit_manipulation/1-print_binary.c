#include "main.h"
/**
 *print_binary - convert to binary
 *@n: integer to convert
 */
int Pow(int a, int b)
{
	if (b == 0)
		return 1;
	else
		return Pow(a, b - 1) * a;
}
void print_binary(unsigned long int n)
{
	int b2 = 2, i = 0, j;
	unsigned long int f1, X = 0, f = 0;
	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}
	while (X <= n)
	{
		X = 0;
		X = Pow(b2, i);
		i++;
	}
	if (X > n)
	{
		X = X - Pow(b2, i);
	}
	i = i - 1;
	while(f != n)
	{
		f = f + Pow(b2, i - 1);
		f1 = f;
		if (f <= n)
		{
			_putchar(1 + '0');
		}
		else if (f > n)
		{
			f = f - Pow(b2, i - 1);
		}
		if (f < f1 )
		{
			_putchar(0 + '0');
		}
		else if(f == n)
		{
			for (j = i - 1; j > 0; j--)
			{
				_putchar(0 + '0');
			}
		}
		i--;
	}
}

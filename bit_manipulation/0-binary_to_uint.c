#include "main.h"
/**
 *binary_to_uint - binary to int
 *@b: the binary string
 *
 */
int Pow(int a, int b)
{
	if (b == 0)
		return 1;
	else
		return Pow(a, b - 1) * a;
}
unsigned int binary_to_uint(const char *b)
{
	int i = 0, l, r = 0, b2 = 2, d;

	while (*(b + i) != '\0')
	{
		if (*(b + i) != '0' && *(b + i) != '1')
		{
			return (0);
		}
		i++;
	}
	l = strlen(b);
	for (i = l; i >= 0; i--)
	{
		d = l - i - 1;
		if (*(b + i) == '1')
		{
			r = r + Pow(b2, d);
		}
		else if (*(b + i) == '0')
		{
			r = r;
		}
	}
	return (r);
}

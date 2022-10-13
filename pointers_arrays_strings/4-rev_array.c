#include "main.h"
/**
 * reverse_array - to reverse the content of an array
 *
 *@a: - the array itself
 *
 *@n: - length of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, *d, *f;
	int c = 0;
	n = n - 1;
	i = j = 0;
	d = a;
	f = a;
	while (i < n)
	{
		i++;
		f++;
	}
	while (j < n / 2)
	{
		c = *(d);
		*(d) = *(f);
		*(f) = c;
		j++;
		f--;
		d++;
	}
}
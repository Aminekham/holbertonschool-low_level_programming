#include "main.h"
/**
 *_sqrt_recursion - function to give the square root of n
 *
 * @n: - the integer to figure the square root of
 *
 * Return: the square root of n
 */
int sqrts(int r, int m)
{
	if (r * r == m)
	{
		return (r);
	}
	else if (r * r > m)
	{
		return (-1);
	}
	else
	{
		r++;
		return (sqrts(r, m));
	}
}
int _sqrt_recursion(int n)
{
	return (sqrts(1, n));
}

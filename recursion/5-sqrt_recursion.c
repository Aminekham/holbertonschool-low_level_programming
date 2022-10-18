#include "main.h"
/**
 *sqrts - function to help comparing two integers to find the square root
 *
 * @r: - the integer to move further and give us the return needed 
 * 
 * @m: - the integer to find the square root of
 *
 * Return: the function itself to test again
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
/**
 *_sqrt_recursion - function to give the square root of n
 *
 * @n: - the integer to figure the square root of
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	return (sqrts(1, n));
}

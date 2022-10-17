#include "main.h"
/**
 *factorial - returns the factorial of a number
 *
 *@n: - integer to get its factorial
 *
 * Return: the factorial of n or -1 if the result is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

#include "main.h"
/**
 * _pow_recursion - to power of with recursion
 *
 * @x: - the integer to take to the power
 *
 * @y: - the power to take it to
 *
 * Return: the integer to take to the power of y
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if(x == 0 || y == 0) 
	{
		return(1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

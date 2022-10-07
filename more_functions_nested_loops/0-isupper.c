#include "main.h"
/**
 *_isupper - check if the character is uppercase
 *
 * @c: - integer to use
 *
 * Return: return 1 or 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

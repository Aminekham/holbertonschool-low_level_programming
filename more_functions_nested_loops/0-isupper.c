#include "main.h"
/**
 *_isupper(int c) - Description: 'check if the character is uppercase'
 *
 * @c: - integer to use
 *
 * Return : 0 or 1 (depends on the program)
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
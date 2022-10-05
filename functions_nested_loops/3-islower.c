#include "main.h"
/**
 *_islower - Description: 'checks for lowercase character'
 *
 * @c - integer to use
 *
 * Return :0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
{
	return (1);
}
	else
{
	return (0);
}
}

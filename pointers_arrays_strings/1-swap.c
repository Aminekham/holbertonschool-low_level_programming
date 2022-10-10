#include "main.h"
/**
 * swap_int - swapping between two pointers
 *
 * @a - an integer pointer
 *
 * @b - an integer pointer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - a function that uses a pointer of a function on an array
 *
 * @array: - the array to use
 *
 * @size: - the size of the array
 *
 * @action: - the pointer to the function that we will use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}

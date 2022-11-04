#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - returns the index of the element we are searching for
 *
 *@array: - an array of integers to search in
 *
 *@size: - the size of the array
 *
 * @cmp: - pointer of the function to compare with it
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
		{
			return (i);
		}
	}
	if (i == size)
	{
		return (-1);
	}
	return (i);
}

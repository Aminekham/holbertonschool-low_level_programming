#include "search_algos.h"
/**
 * linear_search - implementing the linear search algorithm using c
 *@array: the array to search in
 *@size: the size of that array
 *@value: the value that we are searching for
 *Return: returns an int that represents the index of the searched value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

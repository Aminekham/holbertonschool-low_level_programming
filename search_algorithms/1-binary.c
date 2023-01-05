#include "search_algos.h"
/**
 *binary_search - implementing the binary search algorithm using c
 *@array: the array to search in
 *@size: the size of that array
 *@value: the value that we are searching for
 *Return: returns an int that represents the index of the searched value
 */
int binary_search(int *array, size_t size, int value)
{
	int x, i;
	int L = 0, R = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (L <= R)
	{
		printf("Searching in array :");
		for (i = L; i <= R; i++)
		{
			if (i == R)
			{
				printf("%d\n", array[i]);
				continue;
			}
			printf("%d, ", array[i]);
		}
		x = (R + L) / 2;
		if (array[x] < value)
		{
			L = x + 1;
		}
		else if (array[x] > value)
		{
			R = x - 1;
		}
		else
		{
			return (x);
		}
	}
	return (-1);
}

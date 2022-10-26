#include "main.h"
/**
 *array_range - a function to display from min to max
 *
 * @min: - the minimum number
 *
 * @max: - the maximum range
 *
 * Return: returns the all of the in between numbers
 */
int *array_range(int min, int max)
{
	int *res;
	int diff, i, j;

	j = 0;
	diff = max - min;
	res = malloc((diff + 1) * sizeof(int));
	for (i = min; i <= max; i++)
	{
		res[j] = i;
		j++;
	}
	return (res);
}

#include "main.h"
/**
 *malloc_checked - function to allocate with the value of b
 *
 * @b: - the number of allocated memory in the heap
 * 
 * Return: returns the adress of those pointers
 *
 */
void *malloc_checked(unsigned int b)
{
	char *arr;

	if (b == 0)
	{
		return (NULL);
	}
	arr = malloc(b);
	if (arr == NULL)
	{
		exit(98);
	}
	else
	{
		return (arr);
	}
}

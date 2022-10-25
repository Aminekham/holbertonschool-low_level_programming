#include "main.h"
/**
 * 
 * 
 * 
 */
void *malloc_checked(unsigned int b)
{
	char *arr;

	if (b == 0)
	{
		return (NULL);
	}
	arr = malloc (b);
	if (arr == NULL)
	{
		exit(98);
	}
	else
	{
		return (arr);
	}
}
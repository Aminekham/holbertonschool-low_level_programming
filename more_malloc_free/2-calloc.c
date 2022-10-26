#include "main.h"
/**
 *_calloc - using our own calloc
 *
 * @nmemb: - height
 *
 * @size: - size
 *
 *Return: returns the whole memory allocation
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char **sm;
	unsigned int i, j;

	sm = (char **)malloc(nmemb * size);
	for (i = 1; i < nmemb; i++)
	{
		for (j = 1; j < size; j++)
		{
			sm[i][j] = 0;
		}
	}
	return (sm);
}

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
	char *sm;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return(NULL);
	sm = (char *)malloc(nmemb * size);
	if (!sm)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		sm[i] = 0;
	}
	return (sm);
}

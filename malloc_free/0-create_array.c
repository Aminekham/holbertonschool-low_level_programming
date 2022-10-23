#include "main.h"
/**
 *create_array - allocate memory in the heap for an array
 *
 * @size: gives the size of that array
 *
 * @c: the character to fill the array with
 *
 *Return: returns a pointer to the character in that array
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			*(array + i) = c;
		}
	}
	return (array);
	free(array);
}

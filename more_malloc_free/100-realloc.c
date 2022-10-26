#include "main.h"
/**
 *realloc - the equivalent of the realloc function
 *
 * @ptr: - the array to modify itself
 *
 * @old_size: - the old size of ptr
 *
 * @new_size: - the new size of ptr
 *
 * Return: returns the new ptr anyways
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	new = malloc(old_size);
	if (new == NULL)
		return (NULL);
	new = ptr;
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		ptr = new;
		return (ptr);
	}
	return (ptr);
}

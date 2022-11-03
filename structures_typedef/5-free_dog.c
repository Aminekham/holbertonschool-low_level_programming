#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - frees all the allocated memory
 *
 *@d: - the saved dogs
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * 
 * 
 * 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc (sizeof(dog_t*));
	int i, j;

	new->age = age;
	if (new == NULL)
	{
		return(NULL);
	}
	new->name = malloc(sizeof(*name));
	if (new->name == NULL)
	{
		free(name);
		return(NULL);
	}
	new->owner = malloc(sizeof(*owner));
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return(NULL);
	}
	i = 0;
	while (*(name + i) != '\0')
	{
		*(new->name + i) = *(name + i);
		i++;
	}
	if (new->name == NULL && name == NULL)
	{
		free(new);
		return(NULL);
	}
	j = 0;
	while (*(owner + j) != '\0')
	{
		*(new->owner + j) = *(owner + j);
		j++;
	}
	if (new->owner == NULL && owner == NULL)
	{
		free(new);
		free(name);
		return(NULL);
	}
	return(new);
}

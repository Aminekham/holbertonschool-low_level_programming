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
	new->name = malloc(sizeof(*name));
	new->owner = malloc(sizeof(*owner));
	i = 0;
	while (*(name + i) != '\0')
	{
		*(new->name + i) = *(name + i);
		i++;
	}
	j = 0;
	while (*(owner + j) != '\0')
	{
		*(new->owner + j) = *(owner + j);
		j++;
	}
	return(new);
}

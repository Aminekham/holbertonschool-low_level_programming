#include <stdio.h>
#include "dog.h"
/**
 *init_dog - function to give the infos of a dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

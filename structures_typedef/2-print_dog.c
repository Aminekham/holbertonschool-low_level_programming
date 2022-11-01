#include <stdio.h>
#include "dog.h"
/**
 *
 *
 *
 */
void print_dog(struct dog *d)
{
    if (d->name == NULL)
    {
		printf("Name: (nil)");
    }
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("0");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}
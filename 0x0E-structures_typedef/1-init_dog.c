#include "dog.h"
#include <stdio.h>

/**
 * init_dog - main function
 * @d: element 1
 * @name: element 2
 * @age: element 3
 * @owner: element 4
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

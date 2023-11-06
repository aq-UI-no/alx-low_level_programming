#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes struct
 * @d: dog
 * @name: name of dog
 * @age:age of dog
 * @owner: dog owners name
 *
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

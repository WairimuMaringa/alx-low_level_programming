#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise a variable of specified type struct dog
 * @d: pointer to structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocation use by structure
 * @d: structure
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		;
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - lose in its natural habitat
 * @d: the dog to liberate
 * Return:void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}



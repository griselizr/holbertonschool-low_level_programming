#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - dog display
 * @d: pointer to the pet
 * @name: who is the dog
 * @age: dogs living years
 * @owner: dog owner
 * Return:void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(d)->name = name;
	(d)->age = age;
	(d)->owner = owner;
}

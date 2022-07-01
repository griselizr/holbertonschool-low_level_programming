#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog
 * @name: who is the dog
 * @age: dogs living years
 * @owner: dog owner
 * Return:void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int i, cpy, s;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	i = 0;
	while (name[i])
		i++;
	dog->name = malloc(sizeof(char) * i);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	s = 0;
	while (s < i)
		s++;
	dog->name[s] = name[s];

	dog->age = age;
	for (cpy = 0; owner[cpy]; cpy++)
		;
	cpy++;
	(dog)->owner = malloc(sizeof(char) * cpy);

	if ((dog)->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (s = 0; s < cpy; s++)
		(dog)->owner[s] = owner[s];
	return (dog);
}

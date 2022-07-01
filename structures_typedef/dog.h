#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - dog display
 * @name: dog
 * @age: time
 * @owner: dog owner
 *
 * Description: who are these pets?
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif



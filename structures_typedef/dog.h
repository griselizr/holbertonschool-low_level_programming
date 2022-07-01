#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dogs - dog display
 * @name: name
 * @age: age
 * @owner: dog owner
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
};

typedef struct dog dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif



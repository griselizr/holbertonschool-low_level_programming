#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct my_struct - Short description
 * @a: First member
 * @b: Second member
 * @c: Third member
 *
 * Description: Longer description
 */

struct the_dog
{
	char *name;
	float *age;
	char *owner;
};

typedef struct the dog the_dog;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif



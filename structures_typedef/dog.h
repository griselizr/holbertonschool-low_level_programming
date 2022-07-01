#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dogs - dog display
 * @a: First member
 * @b: Second member
 * @c: Third member
 *
 * Description: Longer description
 */

struct dogs
{
	char *name;
	float *age;
	char *owner;
};

typedef struct dogs dogs_t;

void print_dog(struct dogs *d);
dogs_t *new_dog(char *name, float age, char *owner);
void free_dog(dogs_t *d);


#endif



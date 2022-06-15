#include "main.h"
/**
 * swap_int - makes a pointer and updates the value it points to to 98
 * @a: pointer
 * @b: pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

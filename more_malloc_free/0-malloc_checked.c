#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - alocates memory
 *@b: unsigned int
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);
		if (z == NULL)
		{
			exit(98);
		}
	return (z);
}

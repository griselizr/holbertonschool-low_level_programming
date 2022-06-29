#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - concatenates two strings
 *@nmemb: unsigned int
 *@size: string
 *Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int c = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (; c < (nmemb * size); c++)
		*(p + c) = 0;

	return ((void *)p);

}

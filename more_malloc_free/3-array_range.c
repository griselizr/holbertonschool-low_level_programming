#include "main.h"
#include <stdlib.h>
/**
 *array_range - array of integers
 *@min: integer
 *@max: integer
 *Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int a, b;
	int *pr;

	if (min > max)
		return (NULL);

	pr = malloc((max - min + 1) * sizeof(int));

	if (pr == NULL)
		return (NULL);
	b = 0;
	for (a = min; a <= max; a++)
	{
		pr[b] = a;
		b++;
	}
	return (pr);
}


#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: The array
 * @n: The number
 */
void print_array(int *a, int n)
{
	int g;

	for (g = 0; g < n; g++)
	{
		printf("%d", a[g]);

		if (g == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}

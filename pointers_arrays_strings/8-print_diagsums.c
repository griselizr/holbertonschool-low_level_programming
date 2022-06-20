#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sums of 2 diagonals in matrix
 * @a: shows
 * @size: size
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int d;
	unsigned int b = 0;
	unsigned int c = 0;

	for (d = 0; d < size; d++)
	{
		b += a[(size * d) + d];
		c += a[(size * (d + 1)) - (d + 1)];
	}

	printf("%d, %d\n", b, c);
}

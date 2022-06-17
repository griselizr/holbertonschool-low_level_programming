#include "main.h"
/**
 * reverse_array - reverse array
 * @a: initial string
 * @n: number of characters
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, b, c;

	c = n - 1;
	for (i = 0; i < n / 2; i++, c--)
	{
		b = a[i];
		a[i] = a[c];
		a[c] = b;
	}
}


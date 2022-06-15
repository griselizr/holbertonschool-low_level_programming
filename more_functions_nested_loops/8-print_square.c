#include "main.h"
/**
 *print_square - prints squares
 * @size: parameter
 *return: 0
 */
void print_square(int size)
{
	int i, b;

	if (size > 0)
	{
		for (b = 0; b < size; b++)
		{
		for (i = 0; i < size; i++)
		{
			_putchar(35);
		}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}


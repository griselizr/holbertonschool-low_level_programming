#include "main.h"
/**
 *print_diagonal - prints a diagonal line
 * @n: the lines
 *return: 0
 */
void print_diagonal(int n)
{
	int s, ln;

	if (n >= 0)
	{
		for (s = 0; s < n; s++)
		{
		for (ln = 0; ln < s; ln++)
		{
			_putchar(32);
		}
		_putchar('\\');
		_putchar('\n');
		}
	}
}


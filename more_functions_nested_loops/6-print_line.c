#include "main.h"
/**
 *print_line - prints a straight line
 * @n: the lines
 *return: 0
 */
void print_line(int n)
{
	int ln;

	if (n >= 0)
	{
		for (ln = 0; ln < n; ln++)
			_putchar('_');
	}
		_putchar('\n');
}


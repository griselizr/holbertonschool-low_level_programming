#include "main.h"
/**
 *print_line - prints a straight line
 * @n: the lines
 *return: 0
 */
void print_line(int n)
{
	int ln = 0;

	if (ln <= 0)
	{
		_putchar('\n');
	}
		for (ln = 0; ln < n; ln++)
		{
			_putchar('_');
		}
		_putchar('\n');
}

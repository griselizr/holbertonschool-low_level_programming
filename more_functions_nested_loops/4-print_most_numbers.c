#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9
 * Return: 0
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (!(n == '2' || n == '4'))
		_putchar(n);
	}
	_putchar('\n');
}

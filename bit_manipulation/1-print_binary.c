#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n:variable
 * Return: binary numbers
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	_divide(n);
}

/**
 * _divide - divideds number to convert to binary
 * @n: number to convert
 */

void _divide(unsigned long int n)
{
	if (n < 1)
	{
		return;
	}
	_divide(n >> 1);
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}


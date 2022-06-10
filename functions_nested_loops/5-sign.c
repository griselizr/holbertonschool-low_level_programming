#include "main.h"
/**
 * print_sign - checks for a alphabetic order
 *@n: character to be checked
 * Return: 1 if n is greater than cero, 0 if returns o, and -1 if its less than cero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @n: number of integers
 * @separator: string
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y = 0;
	int uno;
	va_list var;

	va_start(var, n);

	while (y < n)
	{
		y++;

	uno = va_arg(var, int);
	printf("%d", uno);

	if (y < n - 1)
		printf("%s", separator);

	else if (separator != NULL)
		printf("%s", separator);
	y++;
	}
	printf("\n");
	va_end(var);
}



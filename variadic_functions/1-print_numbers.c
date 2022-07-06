#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @n: number of integers
 * @separator: string
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	int uno;
	va_list var;

	va_start(var, n);

	for (y = 0; y < n; y++)
	{
		uno = va_arg(var, int);
		printf("%d", uno);

	if (y < n - 1 && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(var);
}



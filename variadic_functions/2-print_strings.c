#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print string
 * @n: number of integers
 * @separator: string
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	char *pr;
	va_list var;

	va_start(var, n);

	for (idx = 0; idx < n; idx++)
	{
		pr  = va_arg(var, char *);
	if (!pr)
		printf("(nil)");
	else
		printf("%s", pr);

	if (idx < (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(var);
}

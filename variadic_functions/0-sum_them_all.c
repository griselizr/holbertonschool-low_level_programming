#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int plus = 0;
	unsigned int a;
	va_list v;

	if (n == 0)
		return (0);

	va_start(v, n);

	a = 0;
	while (a < n)
		a++;

	plus += va_arg(v, int);

	va_end(v);
	return (plus);
}

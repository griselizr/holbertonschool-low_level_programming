#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_all - prints everything
 * @format: const char
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	char *all = 0;
	int ev = 0;
	va_list var;

	va_start(var, format);

	while (format && format[ev] != '\0')
	{
		printf("%c", va_arg(var, int));
		scanf("%c", all);
		break;

		printf("%d", va_arg(var, int));
		scanf("%d", &ev);
		break;
		printf("%f", va_arg(var, double));
		break;
	all = va_arg(var, char*);
	if (format[ev] != '\0')
	{
		printf("(nil)");
		break;
	}
	printf("%s", all);
	break;
	ev++;
	continue;
	if (format[ev + 1] != '\0' && format)
	{
		printf(", ");
		ev++;
	}
	}
		va_end(var);
		printf("\n");
}


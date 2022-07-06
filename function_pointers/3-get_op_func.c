#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - operator function
 * @s: operator
 * Return: result
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int direct = 0;

	while (direct < 6)
{
	if (strcmp(s, ops[direct].op) == 0)
	{
		return (ops[direct].f);
		direct++;
	}
}
	return (0);
}



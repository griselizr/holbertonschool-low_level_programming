#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function pointers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c, d, g;
	int (*l_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	l_func = get_op_func(argv[2]);
	if (l_func == NULL)
	{
		printf("Error\n");
				exit(99);
	}
	c = atoi(argv[1]);
	d = atoi(argv[3]);
	g = l_func(c, d);
	printf("%d\n", g);
		return (0);
}




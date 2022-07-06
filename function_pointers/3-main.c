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
	int (*ps)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ps = get_op_func(argv[2]);
	if (ps == NULL)
	{
		printf("Error\n");
				exit(99);
	}
	printf("%d\n", ps(atoi(argv[1]), atoi(argv[3])));
		return (0);
}




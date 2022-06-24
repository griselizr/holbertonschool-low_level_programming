#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int mul = 0;
	int total;

	if (argc > 2)
	{
		i = atoi(argv[1]);
		mul = atoi(argv[2]);
		total = i * mul;

		printf("%d\n", total);
	}
	else if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

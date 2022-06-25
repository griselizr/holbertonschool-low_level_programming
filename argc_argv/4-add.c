#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name
 * @argc: count
 * @argv: vector
 * Return: 0 or -1
 */

int main(int argc, char *argv[])
{
	int num, i, total;

	for (num = 1; num < argc; num++)
	{
		for (i = 0; argv[num][i]; i++)
		{
			if (argv[num][i] < 97  && argv[num][i] > 122)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (num = 1; num < argc; num++)
	{
		total += atoi(argv[num]);
	}
	printf("%d\n", total);
	return (0);
}

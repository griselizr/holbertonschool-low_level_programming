#include <stdio.h>
/**
 * main - prints program name
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num;
	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}
	return (0);
}

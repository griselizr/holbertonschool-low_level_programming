#include <stdio.h>
/**
 * main - prints program name
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

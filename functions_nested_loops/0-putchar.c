#include "main.h"
/**
 * main - print the word _putchar
 * Return: 0
 */

int main(void)
{
	int a;
	char w[] = "_putchar";

	a = 0;
	while (a <= 7)
	{
		_putchar(w[a]);
		a++;
	}
		_putchar('\n');
	return (0);
}

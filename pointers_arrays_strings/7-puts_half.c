#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str:string
  * Return: 0
  */
void puts_half(char *str)
{
	int i = 0;
	int ln;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		ln = (i - 1) / 2;
		ln += 1;
	}
	else
	{
		ln = i / 2;
	}
	for (; ln < i; ln++)
	{
		_putchar(str[ln]);
	}
	_putchar('\n');
}


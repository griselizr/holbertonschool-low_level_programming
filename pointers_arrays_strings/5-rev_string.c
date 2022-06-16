#include "main.h"
/**
 * rev_string -function that rev a string
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	int b = 0;
	char c = 0;

while (s[b++])
i++;

	for (b = i - 1; b >= i / 2 ; b--)
	{
	c = s[b];
	s[b] = s[i - b - 1];
	 s[i - b - 1] = c;
}
}


#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @c: string
 * Return: 0
 */
char *cap_string(char *c)
{
	int u;

	for (u = 0; c[u] != '\0'; u++)
	{
		if (c[u] >= 'a' && c[u] <= 'z')
			c[u] = c[u] - (' ');
	}
			return (c);
}

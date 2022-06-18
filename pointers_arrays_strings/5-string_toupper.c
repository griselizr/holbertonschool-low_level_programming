#include "main.h"
/**
 * string_toupper - chnge lower case letters to upper
 * @g: string
 * Return: 0
 */
char *string_toupper(char *g)
{
	int idx;

	for (idx = 0; g[idx] != '\0'; idx++)
	{
		if (g[idx] >= 'a' && g[idx] <= 'z')
			g[idx] -= (' ');
	}
			return (g);
}

#include "main.h"
/**
 * leet - encondes a string into 1337
 * @c: string
 * Return: 0
 */
char *leet(char *c)
{
	int a;
	int b;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (a = 0; *(c + a); a++)
	{
		for (b = 0; l[b] != '\0'; b++)
		{
			if (c[a] == l[b])
				c[a] = n[b];
		}
	}
	return (c);
}

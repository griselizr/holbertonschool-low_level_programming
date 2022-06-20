#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: character
 * @c: chararcter
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int lc;

	lc = 0;
	while (*(s + lc) != '\0')
	{
		lc++;
		if (*(s + lc) == c)
			return (s + lc);
	}
	return (0);
}

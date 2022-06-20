#include "main.h"
/**
 * _strpbrk - searches a string from any sets of bytes
 * @s: string bytes
 * @accept: string
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int f;

	while (*s)
	{
		f = 0;
		while (accept[f])
		{
			f++;
			if (*s == accept[f])
			{
				return (s);
			}
		}
	s++;
	}
	return ('\0');
}

#include "main.h"
/**
 * _strspn - copy a string
 * @s: initial string
 * @accept: end of string
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
			if (s[a] != accept[b])
				break;
	}
	return (a);
}

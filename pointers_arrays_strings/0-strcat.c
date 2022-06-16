#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: initial string
 * @src: end of string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	a++;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
		return (dest);
}



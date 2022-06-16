#include "main.h"

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  * Return: the pointer
  */
char *_strcpy(char *dest, char *src)
{
	int cp;

	for (cp = 0; src[cp] != '\0'; cp++)
	{
		dest[cp] = src[cp];
	}
		dest[cp++] = '\0';
	return (dest);
}

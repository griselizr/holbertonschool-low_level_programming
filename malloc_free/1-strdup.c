#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - copy of given string
 *@str: string
 *Return: pointer or NULL
 */
char *_strdup(char *str)
{
	int dp;
	char *s;

	if (str == NULL)
		return (NULL);
	dp = 0;
	while (str[dp])
		dp++;

	s = malloc(sizeof(char) * (dp + 1));
	if (s == NULL)
		return (NULL);
	for (dp = 0; str[dp] != '\0'; dp++)
		s[dp] = str[dp];

	return (s);
}


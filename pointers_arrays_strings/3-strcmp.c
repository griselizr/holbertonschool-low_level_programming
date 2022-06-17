#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string
 * @s2: string
 * Return: 0, 1, -1
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	if (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
		return (0);

	if (s1[a] < s2[a])
		a++;
	if (s2[a] > s1[a])
		return (s1[a] - s2[a]);
	else

		return (-(s2[a] - s1[a]));
}

#include "main.h"
/**
 * _islower - checks for a lower case number
 *@c: character to be checked
 * Return: 1 if c is  lower case or 0 if not
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}

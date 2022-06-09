#include <stdio.h>

/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	int num;
	char letters;

	/* numbers from 0 to 9 */
	for (num = 48; num <= 57; num++)
		putchar(num);
	/* hexadecimal letter a to f */
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
		putchar('\n');
return (0);
}

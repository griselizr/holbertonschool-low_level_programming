#include <stdio.h>

/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	int  low;
	int up;

	/* lower case letters */
	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	/* upper case letters */
	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
		putchar('\n');
	 return (0);
}

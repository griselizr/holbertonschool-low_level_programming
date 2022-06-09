#include <stdio.h>
/**
 *main- entry point
 *Return: 0
 */
int main(void)
{
	int idx;

	for (idx = 'z'; idx >= 'a'; idx--)
	{
		putchar(idx);
	}
	putchar('\n');
	return (0);
}

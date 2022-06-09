#include <stdio.h>
/**
 *main- entry point
 *Return: 0
 */
int main(void)
{
	int num;

	num =  48;
	/* print numbers form 0 to 9 */
	while (num <= 57)
	{
		putchar(num);
		num++;
		/* print coma and space if the numbers are less than 9 */
		if (num <= 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

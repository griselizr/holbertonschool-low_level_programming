#include <stdio.h>
/**
 *main- entry point
 *Return: 0
 */
int main(void)
{
	char alp;

	alp = 'a';
	/* lower case letters */
	while (alp <= 'z')
	{
		/* print lower case alphabet except q and e */
		if ((alp != 'q') && (alp != 'e'))
		{
			putchar(alp);
			alp++;
		}
		/* continue printing after avoing q and e*/
		else
		{
			(alp++);
		}
	}
	putchar('\n');
	return (0);
}

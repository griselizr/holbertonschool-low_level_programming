#include "main.h"
/**
 *print_alphabet- prints alphabet in lower case
 *return: 0
 */
void print_alphabet(void)
{
	int let;

	for (let = 'a'; let <= 'z'; let++)
	{
		_putchar(let);
	}
		_putchar('\n');
}

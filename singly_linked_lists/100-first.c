#include <stdio.h>

void __attribute__ ((constructor)) winner(void);

/**
* winner- prints a string
* Return: none
*/

void winner(void)

{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

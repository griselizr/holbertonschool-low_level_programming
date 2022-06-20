#include "main.h"
/**
 * print_chessboard - print a chessboard
 * @a: character
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int ver, hor;

	for (ver = 0; ver < 8; ver++)
	{
		for (hor = 0; hor < 8; hor++)
		{
			_putchar(a[ver][hor]);
			if (hor == 7)
				_putchar('\n');
		}
	}
}

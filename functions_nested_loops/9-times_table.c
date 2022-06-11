#include "main.h"
/**
 *times_table - prints 9 times a table
 * Return: 0
 */
void times_table(void)
{
	int horizontal;
	int vertical;

	for (horizontal = 0; horizontal <= 9; horizontal++)
	{
		for (vertical = 0; vertical <= 9; vertical++)
		{
			if (vertical == 0)
			{
				_putchar(vertical + '0');
			}
			else if (vertical * horizontal <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(vertical * horizontal + '0');
			}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((horizontal * vertical) / 10 + '0');
					_putchar((horizontal * vertical) % 10 + '0');
				}
			}
			_putchar('\n');
		}
}

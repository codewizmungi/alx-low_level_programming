#include "main.h"
/**
 *  times_table - a function that prints the 9 times table, starting with 0.
 *  Return: Nothing
 */
void times_table(void)
{
	int r, h, x;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		for (h = 1; h <= 9; h++)
		{
			_putchar(',');
			_putchar(' ');
			x = r * h;
			if (x <= 9)
				_putchar(' ');
			else
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}

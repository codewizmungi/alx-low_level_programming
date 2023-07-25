#include "main.h"

/**
 *  print_times_table - A function that prints the n times table,
 *  starting with 0.
 *  @n: An Integer Input
 *  Return: void
 */

void print_times_table(int n)
{

	int h, v, x;

	if (n >= 0 && n <= 15)
	{
		for (h = 0; h <= n; h++)
		{
			_putchar('0');
			for (v = 1; v <= n; v++)
			{
				_putchar(',');
				_putchar(' ');
				x = h * v;

				if (x <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((x % 10) + '0');
				}
				else if (x > 9 && x < 100)
				{
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				if (x > 99)
				{
					_putchar((x / 100) + '0');
					_putchar(((x / 10) % 10) + '0');
					_putchar(((x  % 100) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}

}

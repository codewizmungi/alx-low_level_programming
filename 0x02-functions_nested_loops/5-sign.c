#include "main.h"

/**
 * print_sign - A function that prints the sign of a number
 * @n: An input character
 * Return: 1 and prints + if n is greater than zero,
 * or 0 and prints 0 if n is zero
 * and -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int x = 0;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		x = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		x = -1;
		_putchar('-');
	}

	return (x);

}

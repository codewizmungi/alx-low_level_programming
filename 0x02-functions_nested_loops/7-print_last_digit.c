#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number.
 * @a: An input integer
 * Return: the last digit of n
 */

int print_last_digit(int a)
{
	int x = 0;

	if (a < 0)
		x = -1 * (a % 10);
	else
		x = a % 10;

	_putchar((x % 10) + '0');
	return (x % 10);

}

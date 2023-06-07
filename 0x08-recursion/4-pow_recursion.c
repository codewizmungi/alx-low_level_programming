#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x
 * raised to the power of y
 * @x: An input integer
 * @y: exponent of y
 * Return: value of x raised to power y. if y < 0 return -1
 */

int _pow_recursion(int x, int y)
{
	int total = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	total = x * _pow_recursion(x, y - 1);
	return (total);

}

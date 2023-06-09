#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: An integer input
 * Return: the absolute value of the integer
 */

int _abs(int n)
{
	int x = 0;

	if (n < 0)
		x = n * -1;
	else
		x = n;

	return (x);
}

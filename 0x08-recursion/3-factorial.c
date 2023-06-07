#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 * @n: An input number
 * Return: factorial of input number. If n is lower than 0,
 * return -1 and if n = 0 return 1
 */

int factorial(int n)
{
	int total = 0;

	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	total = n * factorial(n - 1);

	return (total);

}

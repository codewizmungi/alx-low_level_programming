#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  A function that returns the sum of all its parameters
 * @n: An Unsigned Integer
 * Return: sum, or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int a, sum = 0;

	if (n == 0)
		return (0);

	va_start(vl, n);

	for (a = 0; a < n; a++)
		sum += va_arg(vl, int);
	va_end(vl);

	return (sum);
}

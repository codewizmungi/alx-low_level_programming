#include "main.h"

/**
 * _sqrt_check - A function that checks for the
 * square root of a number
 * @n: An input integer
 * @min_range: Minimum number for range to check square root
 * @max_range: Maximum number for range to check sqaure root
 * Return: square root of input integer, or -1 if
 * max_range is less than or equal to min_range
 */

int _sqrt_check(int n, int min_range, int max_range)
{

	int g = (min_range + max_range) / 2;
	int g_squared = g * g;

	if (g_squared == n)
		return (g);
	if (max_range <= min_range)
		return (-1);
	if (g_squared < n)
		return (_sqrt_check(n, g + 1, max_range));
	else
		return (_sqrt_check(n, min_range, g - 1));

}

/**
 * _sqrt_recursion - A function that returns the natural
 * square root of a number.
 * @n: An input integer
 * Return: natural square root of n. If square root is not natural return -1
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else
		return (_sqrt_check(n, 1, n / 2));
}

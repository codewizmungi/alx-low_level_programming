#include "main.h"

/**
 * is_prime_check - A function that checks if a number is a prime number
 * @n: An input integer
 * @a: An input integer
 * Return: if input integer is a prime number return 1, else return 0
 */

int is_prime_check(int n, int a)
{

	if (n <= 2)
	{
		if (n == 2)
			return (1);
		else
			return (0);
	}
	if (n % a == 0)
		return (0);
	if (a * a > n)
		return (1);

	return (is_prime_check(n, a + 1));
}

/**
 * is_prime_number - A function that checks if a number is a prime number
 * @n: An input integer
 * Return: if input integer is a prime number return 1, else return 0
 */

int is_prime_number(int n)
{

	if (n == 0 || n == 1)
		return (0);
	else
		return (is_prime_check(n, 2));
}

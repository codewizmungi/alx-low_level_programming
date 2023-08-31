#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: First number
 * @m: Second number
 * Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int num_of_bits = 0;
	unsigned long int a = n ^ m;

	while (a)
	{
		num_of_bits += a & 1;
		a >>= 1;
	}
	return (num_of_bits);
}

#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 * @n: A pointer input
 * @index: The index of the bit we want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	a = ~(1 << index);
	*n = *n & a;

	return (1);
}

#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: Input Number
 * @index: index of bit we want to get
 * Return: the value of the bit at index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{

	int bit_value = 0;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}

#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * to an unsigned int
 * @b: A binary string input
 * Return: The converted number or 0
 * there is one or more chars in the string b that is not 0 or 1
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int converted_number = 0;
	int a = 0, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	while (b[a] == '0' || b[a] == '1')
	{
		converted_number <<= 1;
		converted_number += b[a] - '0';
		a++;
	}
	return (converted_number);
}

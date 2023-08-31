#include "main.h"

/**
 * get_endianness - A function that checks the endianness.
 * Return: 0 for big, 1 for little endianness
 */

int get_endianness(void)
{

	int a = 1;
	char *c = (char *) & a;

	return (*c);
}

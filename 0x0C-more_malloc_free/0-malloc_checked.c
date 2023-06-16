#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: An input unsigned integer
 * Return: void
 */

void *malloc_checked(unsigned int b)
{

	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

}

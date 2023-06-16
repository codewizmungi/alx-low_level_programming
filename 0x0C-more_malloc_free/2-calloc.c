#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array, using malloc.
 * @nmemb: An input  unsigned integer
 * @size: An input unsigned integer
 * Return: A pointer to the allocated memory,
 * if nmemb or size is 0 return NULL,
 * if malloc fails return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *mem_space;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_space = malloc(nmemb * size);
	if (mem_space == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		mem_space[a] = 0;

	return (mem_space);

}

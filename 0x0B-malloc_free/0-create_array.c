#include <stdlib.h>
#include "main.h"

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char
 * @size: The size of the array
 * @c: char to assign
 * Return: NULL if size is 0, or a pointer to
 * the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{

	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		a[b] = c;
	return (a);
}

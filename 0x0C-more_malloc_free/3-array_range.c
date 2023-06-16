#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers.
 * @min: An input integer
 * @max: An input integer
 * Return: the pointer to the newly created array,
 * if min > max return NULL,
 * if malloc fails return NULL.
 */

int *array_range(int min, int max)
{
	int *array;
	int a;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (1 + (max - min)));
	if (array == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		array[a] = min++;

	return (array);

}

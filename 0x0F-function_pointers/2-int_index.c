#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - A function that searches for an integer
u * @array: An Input Array
 * @size: Number of elements in the array
 * @cmp: A function pointer
 * Return: The index of the first element for which the cmp function
 * does not return 0. if no element matches, return -1. If size <=0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
		{
			if ((*cmp)(array[a]) == 1)
				return (a);
		}
	}
	return (-1);
}

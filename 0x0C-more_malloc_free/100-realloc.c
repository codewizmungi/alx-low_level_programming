#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated
 * @old_size: The  size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes of the new memory block
 * Return: Return new memory location,
 * if new_size == old_size return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size), return ptr
 * If new_size is equal to zero, and ptr is not NULL, free(ptr) and return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *new_mem_location, *new_ptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_mem_location = malloc(new_size);
	if (new_mem_location == NULL)
		return (NULL);

	new_ptr = ptr;

	for (a = 0; a < old_size; a++)
		new_mem_location[a] = new_ptr[a];

	free(ptr);
	return (new_mem_location);

}

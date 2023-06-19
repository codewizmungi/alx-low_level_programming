#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees dogs
 * @d: A pointer to dog_t type
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);

		free(d);
	}
}

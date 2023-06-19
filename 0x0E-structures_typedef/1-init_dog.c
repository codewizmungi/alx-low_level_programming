#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initializes a variable of type struct dog
 * @d: Pointer for struct dog type
 * @name: Pointer to store dog name
 * @age: Float variable to store dog age
 * @owner: Pointer to store dog owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

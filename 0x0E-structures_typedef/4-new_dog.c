#include <stdlib.h>
#include "dog.h"

/**
 * string_alloc - A function to allocate memory and store a copy of a string
 * @string: String to be copied and stored
 * Return: A pointer new_string which is a copy of the initial string
 */

char *string_alloc(char *string)
{
	char *new_string;
	int a = 0, b;

	/* Get the length of the initial string */
	while (string[a] != '\0')
		a++;

	/* Allocate memory for the new string to be copied */
	/* Add 1 to length of initial string for Null character '\0' */
	new_string = malloc(sizeof(char) * (a + 1));

	/* Free memory and return NULL if malloc fails */
	if (new_string == NULL)
	{
		free(new_string);
		return (NULL);
	}

	/* Copy initial String to New String */
	for (b = 0; string[b] != '\0'; b++)
		new_string[b] = string[b];

	/* Add Null Character as the last character */
	new_string[b] = '\0';

	/* Return String */
	return (new_string);
}

/**
 * new_dog - a function that creates a new dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: n_dog (dog_t type) or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	char *dog_name, *dog_owner;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	dog_name = string_alloc(name);
	if (dog_name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	n_dog->name = dog_name;
	n_dog->age = age;

	dog_owner = string_alloc(owner);
	if (dog_owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}

	n_dog->owner = dog_owner;

	return (n_dog);
}

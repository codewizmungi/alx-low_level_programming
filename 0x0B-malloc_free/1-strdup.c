#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A function that returns a pointer
 * to a newly allocated space in memory.
 * @str: the string to be duplicated
 * Return: A pointer to the duplicate string,
 * Null if str is NULL or insufficient memory
 */

char *_strdup(char *str)
{

	char *c;
	int a = 0, b;

	if (str == NULL)
		return (NULL);

	while (str[a] != '\0')
		a++;

	c = malloc(sizeof(char) * (a + 1));

	if (c == NULL)
		return (NULL);

	for (b = 0; str[b] != '\0'; b++)
		c[b] = str[b];

	c[b + 1] = '\0';

	return (c);

}

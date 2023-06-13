#include <stdlib.h>
#include "main.h"

/**
 * str_concat - A function that concatenates two strings
 * @s1: Input String 1
 * @s2: Input String 2
 * Return: Concatenated String, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{

	char *final_string;
	int a = 0, b = 0, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	final_string = malloc((sizeof(char) * (b + 1)) + a);

	if (final_string == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		final_string[x] = s1[x];

	for (y = 0; s2[y] != '\0'; y++)
	{
		final_string[x] = s2[y];
		x++;
	}

	final_string[x] = '\0';
	return (final_string);

}

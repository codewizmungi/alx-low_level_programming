#include "main.h"
#include <stdio.h>
/**
 * _strchr - A function that locates a character in a string.
 * @s: An input character
 * @c: An input character
 * Return: Returns a pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: An input character
 * @accept: An input character
 * Return:  A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{

	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return (NULL);
}

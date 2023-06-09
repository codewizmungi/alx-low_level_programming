#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: An input character
 * @b: An input character
 * @n: An input integer
 * Return: A pointer s, which points to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

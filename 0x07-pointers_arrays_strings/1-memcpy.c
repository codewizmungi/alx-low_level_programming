#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: An input character
 * @src: An input character
 * @n: An input integer
 * Return: A pointer to dest, a memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

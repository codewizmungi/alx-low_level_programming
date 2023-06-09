#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: An input character
 * @accept: An input character
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{

		if (s[a] != ' ')
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
				{
					c++;
				}
			}
		}
		else
		{
			return (c);
		}
	}
	return (c);
}

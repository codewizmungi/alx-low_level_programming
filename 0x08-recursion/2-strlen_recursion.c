#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: The string whose length is returned
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{

	int string_length = 0;

	if (*s != '\0')
	{
		string_length = 1 +  _strlen_recursion(s + 1);
	}

	return (string_length);

}

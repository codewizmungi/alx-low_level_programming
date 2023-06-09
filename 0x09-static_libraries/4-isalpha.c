#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic characters
 * @c: An Input Character
 * Return: 1 if c is a letter, lowercase or uppercase, 0 if otherwise
 */

int _isalpha(int c)
{
	int x = 0;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		x = 1;
	else
		x = 0;

	return (x);
}

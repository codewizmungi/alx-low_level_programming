#include "main.h"
/**
 *  _isupper - a function that checks for uppercase character.
 *  @c: An input integer
 *  Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	char a;
	int isUpper = 0;

	for (a = 'A'; a  <= 'Z'; a++)
	{
		if (a == c)
			isUpper = 1;
	}
	return (isUpper);
}

#include "main.h"

/**
 * _string_length - returns length of string
 * @s: string length
 * Return: string length
 */

int _string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _string_length(s + 1));
}

/**
 * is_palindrome_check - A function that checks if a string is a palindrome
 * @s: An Input String
 * @a: An input integer
 * @b: An input integer
 * Return: 1 if the string is a palindrome and 0 otherwise
 */

int is_palindrome_check(char *s, int a, int b)
{
	if (a < 0 || b < 0)
		return (0);
	if (a >= b)
		return (1);
	if (s[a] == s[b])
		return (is_palindrome_check(s, a + 1, b - 1));

	return (0);
}

/**
 * is_palindrome - A function that checks if a string is a palindrome
 * @s: An Input String
 * Return: 1 if the string is a palindrome and 0 otherwise
 */

int is_palindrome(char *s)
{

	if (_string_length(s) == 0)
		return (0);
	else
		return (is_palindrome_check(s, 0, _string_length(s) - 1));

}

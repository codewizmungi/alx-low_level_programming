#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
	_putchar('\n');
	}
}

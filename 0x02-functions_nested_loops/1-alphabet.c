#include "main.h"

/**
 * print_alphabet -  a function that prints the alphabet, in lowercase
 * followed by a new line
 * Return:nothing
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
	_putchar('\n');
}

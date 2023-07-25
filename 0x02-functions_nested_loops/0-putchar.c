#include "main.h"

/**
 * main - Check description
 * Description: it prints the word _putchar, followed by a new line
 * Return: Always 0
 */
int main(void)
{

	char a[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
		_putchar(a[x]);

	_putchar('\n');
	return (0);
}

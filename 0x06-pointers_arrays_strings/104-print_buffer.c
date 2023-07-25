#include "main.h"
#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
void print_line(char *c, int x, int y);

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, ((size % 10) - 1), i);
		}
		_putchar('\n');
	}
	if (size == 0)
		_putchar('\n');
}

/**
 * print_line - prints x bytes of a buffer
 * @c: buffer to print
 * @x: bytes of buffer to print
 * @y: line of buffer to print
 * Return: void
 */

void print_line(char *c, int x, int y)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= x)
			printf("%02x", c[y * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			_putchar(' ');
	}
	for (k = 0; k <= x; k++)
	{
		if (c[y * 10 + k] > 31 && c[y * 10 + k] < 127)
			_putchar(c[y * 10 + k]);
		else
			_putchar('.');
	}
}

/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

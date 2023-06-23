#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings, followed by a new line.
 * @n: number of integers passed to the function
 * @separator: The string to be printed between numbers
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	char *s;
	unsigned int a;

	va_start(vl, n);

	for (a = 0; a < n; a++)
	{
		s = va_arg(vl, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && a != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(vl);
}

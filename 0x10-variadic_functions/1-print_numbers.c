#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 * @n: number of integers passed to the function
 * @separator: The string to be printed between numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int a;


	va_start(vl, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(vl, int));
		if (seperator != NULL && a != (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
	va_end(vl);
}

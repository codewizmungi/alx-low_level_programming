#include "main.h"
#include <stdio.h>

/**
 * main - Main function for program
 *
 * @argc: Integer to store the number of arguments
 * passed when compiling the program
 *
 * @argv: A character array to store the arguments
 * passed when compiling the program
 *
 * Return: Always 0
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{

	if (argc > 0)
	{
		printf("%d\n", argc - 1); /* minus 1 to exclude the program name */
	}
	return (0);
}

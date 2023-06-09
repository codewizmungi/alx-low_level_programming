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

int main(int argc, char *argv[])
{

	/* variable a is used for cycling through argv[] array */
	int a;

	if (argc > 0)
	{
		for (a = 0; a < argc; a++)
		{
			printf("%s\n", argv[a]);
		}
	}
	return (0);


}

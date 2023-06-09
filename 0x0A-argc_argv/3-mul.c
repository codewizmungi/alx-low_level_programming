#include <stdlib.h>
#include <stdio.h>

/**
 * main - Main function for program (A Program that multiplies two numbers)
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

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}

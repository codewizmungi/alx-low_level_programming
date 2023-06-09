#include <ctype.h>
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

	int a, b, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (!isdigit(argv[a][b]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
	}
	return (0);

}

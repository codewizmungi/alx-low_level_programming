#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Main function for program (A program prints the minimum
 * number of coins to make change for an amount of money)
 *
 * @argc: Integer to store the number of arguments
 * passed when compiling the program
 *
 * @argv: A character array to store the arguments
 * passed when compiling the program
 *
 * Return: 1 if arguments passed is not exactly 1, and 0 if otherwise
 */

int main(int argc, char *argv[])
{

	int cents, no_of_coins = 0;

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		if (cents < 0)
		{
			printf("0\n");
		}
		else
		{
			while (cents > 0)
			{
				if (cents >= 25)
					cents -= 25;
				else if (cents >= 10)
					cents -= 10;
				else if (cents >= 5)
					cents -= 5;
				else if (cents >= 2)
					cents -= 2;
				else if (cents >= 1)
					cents -= 1;

				no_of_coins += 1;
			}
			printf("%d\n", no_of_coins);
		}
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

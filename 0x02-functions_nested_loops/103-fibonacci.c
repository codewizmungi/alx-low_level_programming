#include <stdio.h>

/**
 * main - Prints the sum of the even-valued numbers
 * from 4,000,000 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 */

int main(void)
{
	long int sum = 0;

	long int firstNumber = 1;
	long int secondNumber = 2;
	long int nextNumber;

	while (secondNumber <= 4000000)
	{
		if (secondNumber % 2 == 0)
			sum += secondNumber;

		nextNumber = secondNumber;
		secondNumber += firstNumber;
		firstNumber = nextNumber;

	}

	printf("%lu\n", sum);
	return (0);


}

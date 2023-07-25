include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int count = 3;

	long int firstNumber = 1;
	long int secondNumber = 2;
	long int nextNumber = firstNumber + secondNumber;

	printf("%lu, ", firstNumber);
	printf("%lu, ", secondNumber);

	while (count <= 98)
	{
		if (count == 98)
			printf("%lu\n", nextNumber);
		else
			printf("%lu, ", nextNumber);
		firstNumber = secondNumber;
		secondNumber = nextNumber;

		nextNumber = firstNumber + secondNumber;
		count++;
	}

	return (0);


}

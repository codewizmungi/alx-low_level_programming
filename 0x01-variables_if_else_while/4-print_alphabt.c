#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char lettersLowerCase;

	for (lettersLowerCase = 'a'; lettersLowerCase <= 'z'; lettersLowerCase++)
	{
		if (lettersLowerCase != 'e' && lettersLowerCase != 'q')
		putchar(lettersLowerCase);
	}

	putchar('\n');
	return (0);
}

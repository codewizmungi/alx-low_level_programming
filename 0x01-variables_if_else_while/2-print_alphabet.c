#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char lettersLowerCase;

	for (lettersLowerCase = 'a'; lettersLowerCase <= 'z'; lettersLowerCase++)
		putchar(lettersLowerCase);

	putchar ('\n');
	return (0);
}

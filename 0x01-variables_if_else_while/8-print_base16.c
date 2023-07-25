#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int a;
	char lettersLowerCase;

	for (a = '0'; a <= '9'; a++)
		putchar (a);
	for (lettersLowerCase = 'a'; lettersLowerCase <= 'f'; lettersLowerCase++)
		putchar(lettersLowerCase);
	putchar('\n');
	return (0);
}

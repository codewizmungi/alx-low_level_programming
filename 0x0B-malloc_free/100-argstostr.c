#include <stdlib.h>
#include "main.h"

/**
 * argstostr - A function that concatenates
 * all the arguments of your program.
 * @ac: Input integer
 * @av: Input Pointer to a pointer
 * Return: Pointer to a new string,
 * NULL if ac = 0 or av = NULL or if it fails
 */

char *argstostr(int ac, char **av)
{

	char *string;
	int a = 0, b, d = 0, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			length++;
		length++;
		a++;
	}

	string = malloc(sizeof(char) * (length + 1));

	if (string == NULL)
		return (NULL);

	a = 0;
	while (a < ac)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			string[d] = av[a][b];
			d++;
		}
		string[d] = '\n';
		d++;
		a++;
	}
	string[d] = '\0';

	return (string);
}

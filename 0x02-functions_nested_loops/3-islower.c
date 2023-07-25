#include "main.h"

/**
 * _islower - a function that checks for lower case character
 * @c: An input character
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
char i;
int x = 0;

for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
	x = 1;

}

return (x);
}

#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '7'; x++)
	{
		for (y = x + 1; y <= '8'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x == '7' && y  == '8' && z  == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 0 && j == 0)
			{
				continue;
			}
			putchar(i + '0');
			putchar(j + '0');
			if (!(i == 9 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}

	return (0);
}

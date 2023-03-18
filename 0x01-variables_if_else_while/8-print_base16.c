#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char base;
	int i;

	for (i = 0; i < 16; i++)
	{
		base = i < 10 ? i + '0' : i - 10 + 'a';
		putchar(base);
	}
	putchar('\n');

	return (0);

}

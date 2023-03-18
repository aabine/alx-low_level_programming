#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num = 10;
	int i = 0;

	while (i < num)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}

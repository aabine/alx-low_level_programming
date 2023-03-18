#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; alphabets[i] != '\0'; i++)
	{
		putchar(alphabets[i]);
	}

	putchar('\n');

	return (0);
}

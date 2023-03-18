#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabets = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alphabets + i != 'q' && alphabets + i != 'e')
			putchar(alphabets + i);
	}

	putchar('\n');

	return (0);
}

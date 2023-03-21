#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void);

void print_alphabet(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		_putchar(alphabets);
		alphabets++;
	}
	_putchar('\n');
}

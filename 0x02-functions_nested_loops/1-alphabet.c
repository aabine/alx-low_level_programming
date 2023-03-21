#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void.
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

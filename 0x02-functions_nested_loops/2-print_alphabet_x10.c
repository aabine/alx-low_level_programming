#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets ten times.
 *
 * Return: void
 */

void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	int counter = 0;
	char alphabets;

	while (counter < 10)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets);
		}
		_putchar('\n');
		counter++;
	}
}

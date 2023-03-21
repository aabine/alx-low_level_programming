#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return(0);
}

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

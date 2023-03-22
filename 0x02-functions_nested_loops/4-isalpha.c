#include "main.h"

/**
 * _isalpha - checks for a alphabets
 * @c: character to check
 *
 * Return: 1 if c is alphabet, 0 otherwise
 */

int _isalpha(int c);

int _isalpha(int c)
{
	char letter;

	for (letter = 'A'; letter <= 'z'; letter++)
	{
		if (letter == 'Z')
		{
			letter = 'a' - 1;
		}
		if (letter == c)
		{
			return (1);
		}
	}
	return (0);
}

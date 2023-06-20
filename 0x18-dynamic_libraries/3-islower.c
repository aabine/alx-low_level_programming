#include "main.h"

/**
 * _islower - check for lowercase chracter
 * @c: character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c);

int _islower(int c)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
		{
			return (1);
		}
	}
	return (0);
}

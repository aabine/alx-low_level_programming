#include "main.h"

/**
 * islower - check for lowercase chracter
 *
 * Return: int (1 or 0 otherwise)
 */

int _islower(int c);

int _islower(int c)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
		{
			return(1);
		}
	}
	return(0);
}

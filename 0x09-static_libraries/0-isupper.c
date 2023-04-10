#include <stdio.h>
#include "main.h"

/**
 * _isupper - it checks if c is an uppercase character
 * @c: this is the character to check
 *
 * Return: the return type is an integer
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}

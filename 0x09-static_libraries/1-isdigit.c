#include "main.h"
#include <stdio.h>

/**
 * _isdigit - it checks if the input is digit from 0 - 9
 * @c: this is the user input it's an integer
 *
 * Return: The return type is an integer
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

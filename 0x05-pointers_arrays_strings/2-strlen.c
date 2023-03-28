#include "main.h"
#include <stddef.h>

/**
 * _strlen - this function prints the length of an array
 * @s: the parameter of the function
 *
 * Return: the return type is an integer
 */

int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (s[i] != '\0')
	{
		i++;
	}
	
	return (i);
}

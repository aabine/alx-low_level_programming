#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

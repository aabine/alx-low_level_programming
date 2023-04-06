#include "main.h"
/**
 * _strlen_recursion - returns the length of a string recursively
 *
 * @s: the string to be measured
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	/* Base case: if the end of the string is reached, return 0 */
	if (*s == '\0')
	{
		return (0);
	}

	/* Recursive case: add 1 to the length and move to the next character */
	return (1 + _strlen_recursion(s + 1));
}

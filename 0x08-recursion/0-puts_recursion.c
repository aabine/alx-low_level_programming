#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Prints a string using recursion
 * @s: The string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		write(1, s, 1);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

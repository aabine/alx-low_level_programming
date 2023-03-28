#include "main.h"
#include <stddef.h>

/**
 * puts2 - print every other character of a string
 * @str: the string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	size_t len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

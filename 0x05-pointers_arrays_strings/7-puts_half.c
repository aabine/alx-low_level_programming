#include "main.h"
#include <stddef.h>

/**
 * puts_half - print half of string
 * @str: the string to be devided
 *
 * Return: void
 */

void puts_half(char *str)
{
	size_t len = 0;
	size_t i;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = len / 2 + len % 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

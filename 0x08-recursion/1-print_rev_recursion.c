#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - prints a string in reverse recursively
 *
 * @s: the string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}

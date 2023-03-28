#include "main.h"
#include <unistd.h>

/**
 * _puts - this function prints to the standard output
 * @str: the is the function parameter
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	write(STDOUT_FILENO, str, len);
	write(STDOUT_FILENO, "\n", 1);
}

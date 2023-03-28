#include "main.h"
#include <unistd.h>
#include <stddef.h>

/**
 * print_rev - thi function prints a string in reverse
 * @s: this id the parameter of the function
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	size_t len = 0;
	size_t i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len; i > 0; i--)
	{
		write(STDOUT_FILENO, &s[i - 1], 1);
	}
	write(STDOUT_FILENO, "\n", 1);
}

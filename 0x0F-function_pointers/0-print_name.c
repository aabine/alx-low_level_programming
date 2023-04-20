#include "function_pointers.h"
#include <string.h>
#include <stdio.h>

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: the function pointer to use
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_letters - prints a string of letters
 * @name: the string to print
 *
 * Return: void
 */
void print_letters(char *name)
{
	size_t i;

	for (i = 0; i < strlen(name); i++)
	{
		putchar(name[i]);
	}
	putchar('\n');
}

/**
 * print_upper - prints uppercase letters in a string
 * @name: the string to print
 *
 * Return: void
 */
void print_upper(char *name)
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		} else
		{
			putchar(name[i]);
		}
	}
	putchar('\n');
}

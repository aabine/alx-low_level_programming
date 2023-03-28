#include "main.h"
#include <stddef.h>

/**
 * rev_string - reverse a string in place
 * @s: the string to reverse
 *
 * Return: Always void
 */

void rev_string(char *s)
{
	size_t len = 0, i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

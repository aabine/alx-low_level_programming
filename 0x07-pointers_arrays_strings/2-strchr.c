#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 *
 * @s: the string to search in.
 * @c: the character to search for.
 *
 * Return: a pointer to the first occurrence of
 * the character c in the string s,
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (s + i);
		}
	}
	return (NULL);
}

#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to concatenated string or NULL if allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	size_t i;
	char *dest;

	dest = malloc(strlen(s1) + strlen(s2) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(s1) + strlen(s2); i++)
	{
		if (i < strlen(s1))
		{
			*(dest + i) = *(s1 + i);
		}
		else
		{
			*(dest + i) = *(s2 + i - strlen(s1));
		}
	}
	*(dest + i) = '\0';

	return (dest);
}

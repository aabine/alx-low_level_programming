#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 *
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string or NULL if memory allocation fails
 */

char *_strdup(char *str)
{
	size_t i;
	char *mem;

	if (str == NULL)
	{
		return (NULL);
	}
	mem = malloc(sizeof(char) * strlen(str) + 1);

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(str); i++)
	{
		mem[i] = str[i];
	}
	mem[i] = '\0';
	return (mem);
}

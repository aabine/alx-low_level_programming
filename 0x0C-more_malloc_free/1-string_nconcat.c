#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings up to n bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: a pointer to a newly allocated space in memory containing
 * the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j;
	char *mal;

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	mal = malloc(strlen(s1) + n + 1);
	if (mal == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		mal[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		mal[i + j] = s2[j];
	}
	mal[i + j] = '\0';

	return (mal);
}

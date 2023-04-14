#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings up to n bytes
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes from s2 to concatenate
 *
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len, s2_len, result_len;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	/* Truncate s2 if necessary */
	if (n >= s2_len)
	{
		n = s2_len;
	}

	result_len = s1_len + n + 1; /* +1 for the null terminator */
	result = malloc(sizeof(char) * result_len);
	if (result == NULL)
	{
		return NULL;
	}

	/* Copy s1 to the beginning of the result */
	memcpy(result, s1, s1_len);

	/* Concatenate the first n bytes of s2 after s1 */
	if (n < s2_len)
	{
		memcpy(result + s1_len, s2, n);
	}
	else
	{
		memcpy(result + s1_len, s2, s2_len);
	}

	/* Add the null terminator */
	result[result_len - 1] = '\0';

	return result;
}

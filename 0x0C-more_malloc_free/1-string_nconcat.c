#include <stdlib.h>
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
	char *s;
	unsigned int i, j, slen1 = 0, slen2 = 0;

	for (i = 0; s1 && s1[i]; i++)
		slen1++;

	for (j = 0; s2 && s2[j]; j++)
		slen2++;

	if (n < slen2)
		s = malloc(sizeof(char) * (slen1 + n + 1));
	else
		s = malloc(sizeof(char) * (slen1 + slen2 + 1));

	if (!s)
		return (NULL);

	for (i = 0; i < slen1; i++)
		s[i] = s1[i];

	for (j = 0; n < slen2 && i < (slen1 + n); j++)
		s[i++] = s2[j];

	for (j = 0; n >= slen2 && i < (slen1 + slen2); j++)
		s[i++] = s2[j];

	s[i] = '\0';

	return (s);
}

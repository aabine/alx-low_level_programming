#include "main.h"

/**
 * _strncat - concatenate strings
 * @dest: the string destination
 * @src: the source of the string
 * @n: the string size
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = _strlen(dest);
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[len1 + j] = src[j];
	}
	dest[len1 + j] = '\0';
	return (dest);
}

/**
 * _strlen - calculate length of string
 * @n: string
 *
 * Return: length of string
 */

int _strlen(char *n)
{
	int len = 0;

	while (n[len] != '\0')
	{
		len++;
	}
	return (len);
}

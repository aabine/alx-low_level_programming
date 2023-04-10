#include "main.h"

/**
 * _strcat - concatinate strings
 * @dest: the string destination
 * @src: the source of the string
 *
 * Return: return string
 */

char *_strcat(char *dest, char *src)
{
	int len1 = _strlen(dest);
	int len2 = _strlen(src);
	int j;

	for (j = 0; j < len2; j++)
	{
		dest[len1 + j] = src[j];
	}

	dest[len1 + len2] = '\0';
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

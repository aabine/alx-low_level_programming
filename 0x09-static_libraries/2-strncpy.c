#include "main.h"

/**
 * _strncpy - String copy
 * @dest: string destination
 * @src: string source
 * @n: string size
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}

/**
 * _strlen - calculate string length
 * @n: the string
 *
 * Return: the length of the string
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

#include "main.h"

/**
 * _strncpy - copies a string, including null byte, n times from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	unsigned int counter;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}
	for (; counter < n; counter++)
	{
		dest[counter] = '\0';
	}
	return (dest);
}

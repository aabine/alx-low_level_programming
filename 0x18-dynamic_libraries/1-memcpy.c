#include "main.h"

/**
 * _memcpy - copies memory areas
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	counter;
	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}

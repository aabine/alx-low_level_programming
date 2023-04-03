#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory block
 * @b: value to fill memory with
 * @n: number of bytes to fill
 *
 * Return: pointer to start of memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

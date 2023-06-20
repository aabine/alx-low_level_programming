#include "main.h"

/**
 * _memset - fills memory with a constant byte value
 * @s: The memory area to fill
 * @b: The constant byte value to fill the memory with
 * @n: The number of bytes to fill
 * Return: A pointer to the memory area stored
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}

#include "main.h"

/**
 * _strcpy - copy string from one varaiable to another
 * @dest: the destination buffer
 * @src: the source string.
 *
 * Return: a pointer to the destinaton buffer
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}

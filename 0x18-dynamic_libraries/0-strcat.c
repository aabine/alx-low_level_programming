#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: destination pointer
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

#include "main.h"
#include <stdlib.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The bytes to include in the substring
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		unsigned int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			return (len);
		}
		len++;
	}
	return (len);
}

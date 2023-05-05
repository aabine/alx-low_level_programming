#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL or contains non-0/1 chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0;
	int i;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (i = 0; i < len; i++)
	{
		result <<= 1;
		if (b[i] == '1')
			result += 1;
	}

	return (result);
}

#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: the binary string to convert
 *
 * Return: the converted unsigned int, or 0 if there is an error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[i] == '0')
			decimal <<= 1;
		else
			return (NULL);
	}

	return (decimal);
}

#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned integer
 * @b: the binary string to convert
 *
 * Return: the converted unsigned integer, or 0 if an error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	size_t index = 0;
	size_t len = strlen(b);
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; index < len; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0); /* handle invalid input */

		result <<= 1;

		if (b[index] == '1')
			result |= 1;
	}

	if (len > (sizeof(unsigned int) * CHAR_BIT))
		return (0); /* handle overflow */

	return (result);
}

#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @str: string to convert to an integer
 * Return: integer value of the string
 */

int _atoi(char *str)
{
	int index, num_minuses, digit_found, result, digit;

	index = 0;
	num_minuses = 0;
	result = 0;
	digit_found = 0;

	while (str[index] != '\0')
	{
		if (str[index] == '-')
			++num_minuses;

		if (str[index] >= '0' && str[index] <= '9')
		{
			digit = str[index] - '0';
			if (num_minuses % 2)
				digit = -digit;

			result = result * 10 + digit;
			digit_found = 1;
			if (str[index + 1] < '0' || str[index + 1] > '9')
				break;
			digit_found = 0;
		}
		++index;
	}

	if (!digit_found)
		return (0);

	return (result);
}

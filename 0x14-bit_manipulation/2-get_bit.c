#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to retrieve the bit from
 * @index: the index of the bit to retrieve
 *
 * Return: the value of the bit at index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	return ((n >> index) & 1);
}

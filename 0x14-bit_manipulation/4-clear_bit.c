#include "main.h"

/**
 * clear_bit - clears the value of a bit at a given index to 0
 * @n: a pointer to the number to modify
 * @index: the index of the bit to clear
 *
 * Return: 0 on success, or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);
	*n &= ~(1UL << index);

	return (0);
}

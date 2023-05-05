#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: a pointer to the number to modify
 * @index: the index of the bit to set
 *
 * Return: 0 on success, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of bounds */
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	/* Set the bit at the given index */
	*n |= 1UL << index;
	/* Return success */
	return (1);
}

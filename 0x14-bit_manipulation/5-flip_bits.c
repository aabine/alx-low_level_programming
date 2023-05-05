#include "main.h"
/**
 * flip_bits - calculates the number of bits that need to be
 * flipped to convert one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count++;
		diff &= (diff - 1);
	}

	return (count);
}

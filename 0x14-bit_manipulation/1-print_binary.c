#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;
	int flag = 0;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		/* If bit is set, print 1 and set flag */
		if ((n >> i) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		/* If bit is not set and flag is set, print 0 */
		else if (flag)
		{
			_putchar('0');
		}
	}

	/* If flag is not set, n is 0, so print 0 */
	if (!flag)
	{
		_putchar('0');
	}
}

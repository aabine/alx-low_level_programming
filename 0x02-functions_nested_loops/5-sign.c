#include "main.h"

/**
 * print_sign - check if character is a sign.
 * @n: character to check
 *
 * Return: 1 and prints + if n is greater than zero
 * 0 prints 0 if n is zero
 * -1 and print _ if n is less than zero
 */

int print_sign(int n);

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

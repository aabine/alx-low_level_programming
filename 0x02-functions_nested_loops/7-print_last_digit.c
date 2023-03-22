#include "main.h"

/**
 * print_last_digit - computes the last digit of a number
 * @n: the number to compute the last digit of
 *
 * Return: the last digit of the number
 */


int print_last_digit(int n);

int print_last_digit(int n)
{
	if (n > 0)
	{
		return (n % 10);
	}
	return (-n % 10);
}

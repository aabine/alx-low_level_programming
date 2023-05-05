#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned long int
 * @n: the unsigned long int to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) ? '1' : '0');
}

/**
 * print_binary_numbers - prints the binary representation of an array of unsigned long ints
 * @numbers: the array of unsigned long ints to print
 * @count: the number of elements in the array
 *
 * Return: void
 */
void print_binary_numbers(unsigned long int numbers[], size_t count)
{
	size_t i;
	
	for (i = 0; i < count; i++)
	{
		print_binary(numbers[i]);
		putchar('\n');
	}
}

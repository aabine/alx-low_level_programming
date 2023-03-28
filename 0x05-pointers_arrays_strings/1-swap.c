#include "main.h"

/**
 * swap_int - this function swaps integers
 * @a: the first parameter
 * @b: the second parameter
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

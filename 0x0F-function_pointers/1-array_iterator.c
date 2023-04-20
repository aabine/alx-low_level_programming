#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates over an array of
 * integers and applies a function
 * to each element
 *
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to apply
 * to each element of the array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!size || !array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

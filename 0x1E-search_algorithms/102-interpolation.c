#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the value if found, -1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t position, low, high;
	double factor;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		factor = (double)(high - low) / (
				array[high] - array[low]) * (value - array[low]);
		position = (size_t)(low + factor);
		printf("Value checked array[%d]", (int)position);

		if (position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[position]);
		}

		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;

		if (low == high)
			break;
	}

	return (-1);
}

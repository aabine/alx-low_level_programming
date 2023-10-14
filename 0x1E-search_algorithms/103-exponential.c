#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search_recursive - searches for a value in a sorted array of integers
 * using the binary search algorithm (recursive approach)
 * @array: the array to search
 * @l_index: the left index of the array
 * @r_index: the right index of the array
 * @value: the value to search for
 *
 * Return: the index of the value if found, -1 otherwise
 */
int binary_search_recursive(int *array, int l_index, int r_index, int value)
{
	if (r_index >= l_index)
	{
		int mid_index = l_index + (r_index - l_index) / 2;
		int i;

		printf("Searching in array: ");
		for (i = l_index; i <= r_index; i++)
		{
			printf("%d", array[i]);
			if (i == r_index)
				printf("\n");
			else
				printf(", ");
		}

		if (array[mid_index] == value)
			return (mid_index);

		if (array[mid_index] > value)
			return (binary_search_recursive(array, l_index, mid_index - 1, value));

		return (binary_search_recursive(array, mid_index + 1, r_index, value));
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the value if found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	int index = 1;

	while (index < size && array[index] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index *= 2;
	}

	int l_index = index / 2;
	int r_index = (index < size) ? index : size - 1;

	printf("Value found between indexes [%d] and [%d]\n", l_index, r_index);

	return (binary_search_recursive(array, l_index, r_index, value));
}

#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search_recursive - searches for a value in a sorted array of integers
 * using the binary search algorithm (recursive approach)
 * @array: the array to search
 * @left_index: the left index of the array
 * @right_index: the right index of the array
 * @value: the value to search for
 *
 * Return: the index of the value if found, -1 otherwise
 */
int binary_search_recursive(int *array, int left_index, int right_index, int value)
{
	if (right_index >= left_index)
	{
		int mid_index = left_index + (right_index - left_index) / 2;
		int i;

		printf("Searching in array: ");
		for (i = left_index; i <= right_index; i++)
		{
			printf("%d", array[i]);
			if (i == right_index)
				printf("\n");
			else
				printf(", ");
		}

		if (array[mid_index] == value)
			return mid_index;

		if (array[mid_index] > value)
			return binary_search_recursive(array, left_index, mid_index - 1, value);

		return binary_search_recursive(array, mid_index + 1, right_index, value);
	}

	return -1;
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
		return -1;

	if (array[0] == value)
		return 0;

	int index = 1;
	while (index < size && array[index] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index *= 2;
	}

	int left_index = index / 2;
	int right_index = (index < size) ? index : size - 1;
	printf("Value found between indexes [%d] and [%d]\n", left_index, right_index);

	return binary_search_recursive(array, left_index, right_index, value);
}
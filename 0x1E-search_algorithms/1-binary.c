#include "search_algos.h"

/**
 * r_search - calls to recursively search and return the index
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int r_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (r_search(array, half, value));

	half++;

	return (r_search(array + half, size - half, value) + half);
}

/**
 * binary_search - searches for a value in an array of integer
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = r_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

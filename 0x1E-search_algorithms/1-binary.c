#include "search_algos.h"

/**
 * recursive_binary_search - searches for a value in a sorted array
 * using the Binary search algorithm recursively
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value, or -1 if not found
 */
int recursive_binary_search(int *array, size_t size, int value)
{
    size_t middle;
    int result;

    if (array == NULL || size == 0)
        return (-1);

    middle = size / 2;
    printf("Searching in array: ");
    for (size_t i = 0; i < size; i++)
        printf("%s%d", (i == 0) ? "" : ", ", array[i]);
    printf("\n");

    if (value == array[middle])
        return (middle);

    if (value < array[middle])
        return (recursive_binary_search(array, middle, value));

    result = recursive_binary_search(array + middle + 1, size - middle - 1, value);
    return (result == -1 ? -1 : result + middle + 1);
}

/**
 * binary_search - searches for a value in a sorted array
 * using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    int index = recursive_binary_search(array, size, value);

    if (index == -1 || array[index] != value)
        return (-1);

    return (index);
}

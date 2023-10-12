#include "search_algos.h"

/**
 * Linear-search - searches for a value in an array of integers
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    size_t i;
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }
    return -1;
}

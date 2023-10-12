#include "search_algos.h"
#include <math.h>

/**
 * _binary_search - searches for a value in an array of integers
 * @array: the array to search
 * @left_index: the left index of the array
 * @right_index: the right index of the array
 * @target_value: the value to search for
 *
 * Return: the index of the value if found, -1 otherwise
 */
int _binary_search(int *array, size_t left_index, size_t right_index, int target_value)
{
    size_t mid_index;

    if (array == NULL)
        return -1;

    while (right_index >= left_index)
    {
        printf("Searching in array: ");
        for (size_t i = left_index; i < right_index; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[right_index]);

        mid_index = left_index + (right_index - left_index) / 2;
        if (array[mid_index] == target_value)
            return (int)mid_index;
        if (array[mid_index] > target_value)
            right_index = mid_index - 1;
        else
            left_index = mid_index + 1;
    }

    return -1;
}

/**
 * exponential_search - searches for a value in an array of integers
 * @array: the array to search
 * @size: the size of the array
 * @target_value: the value to search for
 *
 * Return: the index of the value if found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int target_value)
{
    size_t index = 0, right_index;

    if (array == NULL)
        return -1;

    if (array[0] != target_value)
    {
        for (index = 1; index < size && array[index] <= target_value; index = index * 2)
            printf("Value checked array[%ld] = [%d]\n", (long)index, array[index]);
    }

    right_index = index < size ? index : size - 1;
    printf("Value found between indexes [%ld] and [%ld]\n", (long)index / 2, (long)right_index);
    return _binary_search(array, index / 2, right_index, target_value);
}

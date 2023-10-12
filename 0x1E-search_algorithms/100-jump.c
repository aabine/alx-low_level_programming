#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the value if found, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
    int step, blockSize, prev;

    if (array == NULL || size == 0)
        return -1;

    blockSize = (int)sqrt((double)size);
    step = prev = 0;

    do
    {
        printf("Value checked array[%d] = [%d]\n", step, array[step]);

        if (array[step] == value)
            return step;

        prev = step;
        step += blockSize;
    } while (step < (int)size && array[step] < value);

    printf("Value found between indexes [%d] and [%d]\n", prev, step);

    for (; prev <= step && prev < (int)size; prev++)
    {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

        if (array[prev] == value)
            return prev;
    }

    return -1;
}

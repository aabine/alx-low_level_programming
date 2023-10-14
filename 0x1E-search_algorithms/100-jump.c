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
    int blockSize, prev, step;

    if (array == NULL || size == 0)
        return -1;

    blockSize = (int)sqrt((double)size);
    step = prev = 0;

    /* Performing jump search across the array */
    do
    {
        printf("Value checked array[%d] = [%d]\n", step, array[step]);

        if (array[step] == value)
            return step;

        prev = step;
        step += blockSize;
    } while (step < (int)size && array[step] < value);

    printf("Value found between indexes [%d] and [%d]\n", prev, step);

    /* Perform linear search within the range [prev] to [step] */
    for (; prev <= step && prev < (int)size; prev++)
    {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

        if (array[prev] == value)
            return prev;

        /* Terminate the loop if the target value is exceeded */
        if (array[prev] > value)
            break;
    }

    return -1;
}

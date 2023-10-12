#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low = 0, high = size - 1, mid;
    size_t i;

    while (low <= high)
    {
        printf("Searching in array: ");
        for (i = low; i <= high; i++)
        {
            printf("%d", array[i]);
            if (i < high)
                printf(", ");
        }
        printf("\n");

        mid = (low + high) >> 1;
        if (array[mid] == value)
        {
            return mid;
        }
        else if (array[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

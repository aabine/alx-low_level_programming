#include "search_algos.h"

/**
 * binary_search_recursive - searches for a value in an array of integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value if found, -1 otherwise
 */
int binary_search_recursive(int *array, size_t size, int value)
{
    size_t middle = size / 2;
    size_t i;

    if (array == NULL || size == 0)
        return -1;

    printf("Searching in array");

    for (i = 0; i < size; i++)
        printf("%s %d", (i == 0) ? ":" : ",", array[i]);

    printf("\n");

    if (middle && size % 2 == 0)
        middle--;

    if (value == array[middle])
    {
        if (middle > 0)
            return binary_search_recursive(
                array, middle + 1, value);
        return (int)middle;
    }

    if (value < array[middle])
        return binary_search_recursive(
            array, middle + 1, value);

    middle++;
    return binary_search_recursive(
        array + middle, size - middle, value) + middle;
}


/**
 * advanced_binary - searches for a value in an array of integers
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the value if found, -1 otherwise
*/

int advanced_binary(int *array, size_t size, int value)
{
    int index = binary_search_recursive(array, size, value);
    if (index >= 0 && array[index] != value)
        return (-1);
    
    return (index);
}

#include "search_algos.h"

/**
 * jump_list - searches for a value in an array of integers
 * @list: the list to search
 * @size: the size of the list
 * @value: the value to search for
 * 
 * Return: the index of the value if found, NULL otherwise
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump_index, k, blockSize;
    listint_t *prev_node;

    if (list == NULL || size == 0)
        return (NULL);

    blockSize = (size_t)sqrt((double)size);
    jump_index = 0;
    k = 0;

    do {
        prev_node = list;
        k++;
        jump_index = k * blockSize;

        while (list->next && list->index < jump_index)
            list = list->next;

        if (list->next == NULL && jump_index != list->index)
            jump_index = list->index;

        printf("Value checked at index [%d] = [%d]\n", (int)jump_index, list->n);

    } while (jump_index < size && list->next && list->n < value);

    printf("Value found between indexes ");
    printf("[%d] and [%d]\n", (int)prev_node->index, (int)list->index);

    for (; prev_node && prev_node->index <= list->index; prev_node = prev_node->next)
    {
        printf("Value checked at index [%d] = [%d]\n", (int)prev_node->index, prev_node->n);
        if (prev_node->n == value)
            return (prev_node);
    }

    return (NULL);
}

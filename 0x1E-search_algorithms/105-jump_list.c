#include "search_algos.h"

/**
 * jump_list - searches for a value in an array of integers
 * @list: the list to search
 * @size: the size of the list
 * @value: the value to search for
 * Return: the index of the value if found, NULL otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t target_index, step, block_size;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	block_size = (size_t)sqrt((double)size);
	target_index = 0;
	step = 0;

	do {
		prev = list;
		step++;
		target_index = step * block_size;

		while (list->next && list->index < target_index)
			list = list->next;

		if (list->next == NULL && target_index != list->index)
			target_index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)target_index, list->n);

	} while (target_index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}

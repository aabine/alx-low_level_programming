#include "lists.h"

/**
 * dlistint_len - Prints all the elements of a doubly linked list
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

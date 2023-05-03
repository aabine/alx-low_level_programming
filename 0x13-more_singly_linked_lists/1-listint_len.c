#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head node of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	/* traverse the list and count the number of nodes */
	for (count = 0; h != NULL; count++) {
		h = h->next;
	}

	return (count);
}

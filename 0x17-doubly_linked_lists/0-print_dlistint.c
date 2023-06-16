#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

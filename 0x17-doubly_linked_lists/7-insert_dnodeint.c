#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given
 * position in a doubly linked list
 * @head: Pointer to the head of the list
 * @idx: Index of the node
 * @n: Integer to be added
 * Return: Pointer to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_node;
	dlistint_t *new_node;

	if (h == NULL)
		(return NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		(return NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	prev_node = get_dnodeint_at_index(*h, idx - 1);
	if (prev_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = prev_node->next;
	if (prev_node->next)
		prev_node->next->prev = new_node;
	prev_node->next = new_node;
	new_node->prev = prev_node;

	return (new_node);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return
 * Return: Pointer to the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	temp = head;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}

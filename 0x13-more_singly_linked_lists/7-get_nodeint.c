#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head node of the list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node, or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count;
	listint_t *c_node;

	/* check if list is empty and index is valid */
	if (head == NULL) {
		return (NULL);
	}

	/* traverse the list to find the node at index */
	for (count = 0; count < index; count++) {
		if (head == NULL) {
			return (NULL);
		}
		c_node = head;
		head = head->next;
	}

	return (c_node);
}

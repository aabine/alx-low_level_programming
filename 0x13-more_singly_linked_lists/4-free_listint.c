#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the head node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *c_node, *next;
	if (head == NULL) {
		return;
	}
	c_node = head;

	/* traverse the list and free each node */
	while (c_node != NULL) {
		next = c_node->next;
		free(c_node);
		c_node = next;
	}
}

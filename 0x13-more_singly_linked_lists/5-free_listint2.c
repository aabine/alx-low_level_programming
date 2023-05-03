#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: pointer to pointer to the head node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *c_node, *next;
	if (*head == NULL) {
		return;
	}
	c_node = *head;

	/* traverse the list and free each node */
	while (c_node != NULL) {
		next = c_node->next;
		free(c_node);
		c_node = next;
	}
	/* set the head to NULL */
	*head = NULL;
}	

#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to pointer to the head node of the list
 * @n: value to store in the new node
 *
 * Return: pointer to the new node, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *c_node;

	node = malloc(sizeof(listint_t));
	if (node == NULL) {
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (*head == NULL) {
		*head = node;
		return (node);
	} else {
		/* traverse the list to find the last node */
		c_node = *head;
		while (c_node->next != NULL) {
			c_node = c_node->next;
		}
		/* insert the new node at the end of the list */
		c_node->next = node;
	}
	return (node);
}

#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the head node of the list
 * @idx: index of the position to insert the new node
 * @n: value to store in the new node
 *
 * Return: pointer to the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *c_node, *n_node, *p_node;
	size_t count;

	/* check if list is empty */
	if (*head == NULL) {
		return (NULL);
	}

	/* create a new node with the given value */
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL) {
		return (NULL);
	}
	n_node->n = n;

	/* if inserting at the head of the list */
	if (idx == 0) {
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}

	/* traverse the list to find the node at index idx-1 */
	p_node = NULL;
	c_node = *head;
	for (count = 0; count < idx && c_node != NULL; count++) {
		p_node = c_node;
		c_node = c_node->next;
	}

	/* if index is out of range, free the new node and return NULL */
	if (count < idx) {
		free(n_node);
		return (NULL);
	}

	/* insert the new node between the previous and current nodes */
	n_node->next = c_node;
	p_node->next = n_node;

	return (n_node);
}

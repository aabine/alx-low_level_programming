#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to pointer to the head node of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *curr_node;
	unsigned int i;

	if (*head == NULL) {
		return (-1);
	}

	/* deleting the head of the list */
	if (index == 0) {
		curr_node = *head;
		*head = curr_node->next;
		free(curr_node);
		return (1);
	}

	/* traverse the list to find the previous node at index idx-1 */
	prev_node = NULL;
	curr_node = *head;
	for (i = 0; i < index && curr_node != NULL; i++) {
		prev_node = curr_node;
		curr_node = curr_node->next;
	}

	/* if index is out of range, return -1 */
	if (i < index || curr_node == NULL) {
		return (-1);
	}

	/* delete the node at the given index */
	prev_node->next = curr_node->next;
	free(curr_node);
	return (1);
}

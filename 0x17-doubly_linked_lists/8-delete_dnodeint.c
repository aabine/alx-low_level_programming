#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to delete
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *del_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		del_node = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(del_node);
		return (1);
	}

	temp = *head;
	for (i = 0; i < index - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	del_node = temp->next;
	temp->next = del_node->next;
	if (del_node->next != NULL)
		del_node->next->prev = temp;
	free(del_node);

	return (1);
}

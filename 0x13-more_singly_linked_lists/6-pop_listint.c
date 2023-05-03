#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns its value
 * @head: pointer to pointer to the head node of the list
 *
 * Return: the value of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *node, *position;
	int value;

	if (head == NULL || *head == NULL) {
		return (0);
	}

	position = *head;
	node = (*head)->next;
	value = position->n;
	free(position);
	*head = node;

	return (value);
}

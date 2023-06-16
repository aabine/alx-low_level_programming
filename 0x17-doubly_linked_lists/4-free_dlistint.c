#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: Pointer to the head of the list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		head = head->next;
		free(head->prev);
		free(head);
		head = NULL;
	}
}

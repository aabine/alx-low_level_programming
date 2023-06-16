#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * of a doubly linked list
 * @head: Pointer to the head of the list
 * @n: Integer to be added
 * Return: Pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}

#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Pointer to the head of the list
 * @n: Integer to be added
 * Return: Pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head)
		(*head)->next = new;
	else
		*head = new;
	return (new);
}

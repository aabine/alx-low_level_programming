#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head node of the list.
 * @str: String to be inserted in the new node.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t len = 0;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Copy the string to the new node */
	new_node->str = (str != NULL) ? strdup(str) : NULL;
	new_node->len = (new_node->str != NULL) ? strlen(new_node->str) : 0;

	/* Add the new node at the beginning of the list */
	new_node->next = *head;
	*head = new_node;

	/* Traverse the list to count the number of nodes */
	current_node = *head;
	while (current_node != NULL)
	{
		len++;
		current_node = current_node->next;
	}

	/* Return a pointer to the new node */
	return (new_node);
}

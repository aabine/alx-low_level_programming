#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head node of the list.
 * @str: String to be inserted in the new node.
 *
 * Description: This function creates a new node with the given string and
 *              adds it to the end of the list.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *current;

	/* Create the new node */
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	/* Copy the string and calculate its length */
	node->str = (str != NULL) ? strdup(str) : NULL;
	node->len = (node->str != NULL) ? strlen(node->str) : 0;
	node->next = NULL;

	/* Add the new node to the end of the list */
	if (*head == NULL)
		*head = node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}

	return (node);
}

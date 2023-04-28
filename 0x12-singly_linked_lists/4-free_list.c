#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 * return: void
 *
 * This function frees a list_t list by iterating through
 * each node and freeing its dynamically allocated memory.
 */
void free_list(list_t *head)
{
	list_t *current, *temp;

	if (head == NULL)
		return;

	current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}

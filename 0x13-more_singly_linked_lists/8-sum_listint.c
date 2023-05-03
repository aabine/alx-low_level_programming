#include "lists.h"

/**
 * sum_listint - computes the sum of all the data (n) of a linked list
 * @head: pointer to the head node of the list
 * Return: the sum of all the data (n) of the list
 */
int sum_listint(listint_t *head)
{
	listint_t *c_node;
	int sum = 0;

	/* check if list is empty */
	if (head == NULL) {
		return (0);
	}

	c_node = head;

	/* traverse the list and compute the sum */
	while (c_node != NULL) {
		sum += c_node->n;
		c_node = c_node->next;
	}

	return (sum);
}

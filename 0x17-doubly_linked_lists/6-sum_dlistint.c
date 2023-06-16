#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly linked list
 * @head: Pointer to the head of the list
 * Return: The sum
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL || head->next == NULL)
		return (0);

	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

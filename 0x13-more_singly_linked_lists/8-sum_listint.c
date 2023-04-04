#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: pointer to the first node in the linked list
 *
 * Return: resulting sum of all node's data or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	/* Traverse the linked list and add up the values */
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

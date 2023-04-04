#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @head: pointer to the head of the linked list
 *
 * Description: This function takes a pointer to the head of a linked list of
 * type listint_t and returns the number of nodes in the list.
 *
 * Return: number of nods in the list.
 */

size_t listint_len(const listint_t *head)
{
	/* Initiailize a counter for the number of nodes */
	size_t count = 0;

	/* Traverse the list while the current node is not NULL */
	while (head != NULL)
	{
		/* Increment the counter */
		count++;

		/* Move to the next node in the list*/
		head = head->next;
	}

	/* Return the number of nodes */
	return (count);
}

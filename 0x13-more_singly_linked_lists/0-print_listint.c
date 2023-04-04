#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the head of the linked list
 *
 * This function tales a pointer to the head of a linked
 * list of type listint_t and prints all the elements in the list, one per
 * line. It returns the number of nodes in the list
 * Return: a num for success
 */

size_t print_listint(const listint_t *h)
{
	/* Initialize a  counter for the number of nodes */
	size_t num = 0;

	/* Traverse the list while the current node is not NULL */
	while (h != NULL)
	{
		/* Print the value of the current node */
		printf("%d\n", h->n);

		/* Increment the counter*/
		num++;

		/* Move to the next node in the list*/
		h = h->next;
	}

	/* Return the number of nodes */
	return (num);
}

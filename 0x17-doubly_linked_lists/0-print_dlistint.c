#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 *
 */

size_t print_dlistint(const dlistint_t *h)
{

	size_t count;
	/* Introduce a check at first to see if the list is empty */

	if (h == NULL)
	{
		return (0);
	}



	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a linked list safely to avoid memory leaks
 * and dangling pointers
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_free_liistint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	/* Check if the head pointer or the linked list is NULL */
	if (!h || !*h)
		return (0);

	while (*h)
	{
		/*
		 * Calculate the difference between the address of the head
		 * and its next node
		 */
		diff = *h - (*h)->next;

		if (diff > 0)
		{
			/* Temporary store the pointer to the next node. */
			temp = (*h)->next;

			/* Free the current head node. */
			free(*h);

			/* Move the head pointer to the next node */
			*h = temp;

			/* Increment the number of freed nodes */
			len++;
		}
		else
		{
			/* Free the current head node. */
			free(*h);

			/*
			 * Set the head pointer to NULL to avoid dangling
			 * pointers.
			 */
			*h = NULL;

			/* Increment the number of freed nodes. */
			len++;

			/* Exit the loop. */
			break;
		}
	}

	/* Set the head pointer to NULL to avoid dangling pointers. */
	*h = NULL;

	/* Return the number of freed nodes. */
	return (len);
}

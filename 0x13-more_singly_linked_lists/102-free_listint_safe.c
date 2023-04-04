#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int distance;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		distance = *h - (*h)->next;
/*
 * if the distance between the current node and the next node
 * is positive, it means that the list contains a loop.
 */
		if (distance > 0)
		{
			/* Temporary store the pointer to the next node. */
			temp = (*h)->next;
			/* free the current head node */
			free(*h);
			/* Free the current head node. */
			*h = temp;
			len++;
		}
		else
		{
/* Free the current head node. */
			free(*h);
/*
 * Set the head pointer to NULL to avoid dangling pointers
 */
			*h = NULL;
			/* Increment the number of freed nodes */
			len++;
			/* Exit the loop*/
			break;
		}
	}
	*h = NULL;
/* Returns the number of freed node */
return (len);
}

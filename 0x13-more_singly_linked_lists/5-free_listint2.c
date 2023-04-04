#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: double pointer to the head of the linked list
 *
 * Description: This function frees the memory allocated for all nodes in the
 * linked list starting from the head node and sets the head to NULL.
 */

void free_listint2(listint_t **head)
{
	/* Check if the double pointer is NULL or the linked list is already empty */
	if (head == NULL || *head == NULL)
		return;
	/* Tracerse the list and free each node */
	while (*head != NULL)
	{
		/* Store a reference to the next node before freeing the current node */
		listint_t *temp_node = (*head)->next;

		/* Free the current node */
		free(*head);

		/* Move onto the next node */
		*head = temp_node;
	}
	/* Set the head to NULL */
	*head = NULL;
}

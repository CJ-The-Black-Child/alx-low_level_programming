#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the head of the linked list
 *
 * Description: This function fress the memory allocated for all nodes in the
 * linked list starting from the head node.
 */

void free_listint(listint_t *head)
{

	/* Traverse the list and free each node */
	while (head != NULL)
	{
		/* Stores a reference to the next node before freeing the current node */
		listint_t *temp_node = head->next;

		/* Free the current node */
		free(head);

		/* Move on to the next node */
		head = temp_node;
	}
}

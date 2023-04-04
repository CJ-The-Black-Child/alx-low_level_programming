#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to the first node int he list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	/* points to the previous node */
	listint_t *prev_node = NULL;
	/* points to the next node*/
	listint_t *next_node = NULL;

	/* While there is still a node to reverse */
	while (*head)
	{
		/* get the next node */
		next_node = (*head)->next;
		/* set the current node's next to the  previous node*/
		(*head)->next = prev_node;
		/* set the previous node to the current node */
		prev_node = *head;
		/* move the current node to the next node*/
		*head = next_node;
	}

	/* set the new head of the list*/
	*head = prev_node;

	/* return the new head of the list */
	return (*head);
}

#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that  was deleted or 0 if the list
 * is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	/* If the head pointer is NULL or points to NULL, the list is emppty */
	if (!head || !*head)
		return (0);

	/* Store the value of the node to be deleted*/
	num = (*head)->n;

	/* Move the head pointer to the next node in the list*/
	temp = (*head)->next;

	/* Free the memory allocated for the head node */
	free(*head);

	/* Update the head pointer to point to the next node */
	*head = temp;

	/* Return the vale of the deleted node*/
	return (num);
}

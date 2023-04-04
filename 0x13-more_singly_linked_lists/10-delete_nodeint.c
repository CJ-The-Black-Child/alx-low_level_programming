#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (success), or -1 (fails)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *to_delete;
	unsigned int  i;

	if (!head || !(*head))
		return (-1);

	/* If say to delete the head node*/
	if (index == 0)
	{
		to_delete = *head;
		*head = to_delete->next;
		free(to_delete);
		return (1);
	}

	/* Traverse the list until the node just before the one to delete */
	temp = *head;

	for (i = 0; temp && i < index - 1; i++)
		temp = temp->next;

	/* If the index if out of range */

	if (!temp || !(temp->next))
		return (-1);
	/* Remove the node at the specified index */
	to_delete = temp->next;
	temp->next = to_delete->next;
	free(to_delete);

	return (1);
}


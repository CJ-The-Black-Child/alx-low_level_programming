#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list, at a
 * given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *mew_node, *temp;
	/* Allocates memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	/* Assign data to the new node*/
	new_node->n = n;
	new_node->next = NULL;
/*
 * If inserting at the beginning of the list, update head and return
 * new node
 */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
/*
 * Traverse the list to the node before the position to insert
 * the new node
 */
	for (i = 0; temp && i < idx - 1; i++)
		temp = temp->next;
/*
 * If the position to insert is out of bounds, free memory and
 * return NULL
*/
	if (i < idx - 1 || !temp)
	{
		free(new_node);
		return (NULL);
	}
	/* Insert the new node at the specified position and return it */
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

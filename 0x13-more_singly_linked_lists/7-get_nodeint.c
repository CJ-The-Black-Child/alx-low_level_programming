#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in alinked list
 * @head: first node in the linked list. A pointer to the head
 * of the list
 * @index: index of the node to return
 *
 * Return: pointer to the node at the given index, or NULL if
 * doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Counter for traversing the list */
	unsigned int i = 0;
	/* Pointer to the current node in the list*/
	listint_t *node = head;

	/*
	 * Traverse the lst until one reaches the desired index or the
	 * end of the list
	 */
	while (node && i < index)
	{
		node = node->next;
		i++;
	}

	/* If the node exists, return a pointer to it. otherwise returns NULL*/
	return (node ? node : NULL);
}


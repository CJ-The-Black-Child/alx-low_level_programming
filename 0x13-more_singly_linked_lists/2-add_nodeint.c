#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to a pointer to the head of the linked list
 * @data: integer value to store in the new node
 *
 * Description: This function creates a new node with the specified integer
 * value and adds it to the beginning of the linked list. It returns a pointer
 * to the new node, or NULL if the allocation fails
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int data)
{
	/* Allocate memory for the new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	/* Initialize the new node */
	new_node->n = data;
	new_node->next = *head;

	/* Update the head pointer to point to the new node */
	*head = new_node;

	/* Return a pointer to the new node */
	return (new_node);
}

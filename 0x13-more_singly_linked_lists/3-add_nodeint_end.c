#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to a pointer to the head of the linked list
 * @data: integer value to store in the new node
 *
 * Description: This function creates a new node with the specified
 * integer value and adds it to the end of the linked list. It returns
 * a pointer to the new node, or NULL if the allocation fails
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int data)
{
	listint_t *new_node;
	listint_t *temp;
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	/* Initialize the new node */
	new_node->n = data;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Append the new node to the end of the list*/

	temp->next = new_node;

	/* Return a pointer to the new node */

	return (new_node);
}

#include "lists.h"
/**
 * print_listint_len - Counts the number of unique nodes in a looped
 * listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t to check
 *
 * Return: if the list is not looped -o. Otherwise the number of unique nodes
 * in the list
 */
size_t print_listint_len(const listint_t *head)
{
	/* Initialize pointers */
	const listint_t *tortoise, *hare;
	/* Initialize count of unique nodes */
	size_t nodes = 1;
	/*Check for empty or non-looped list */
	if (head == NULL || head->next == NULL)
		return (0);
	/* Initialize pointers to first and second nodes */
	tortoise = head->next;
	hare = (head->next)->next;
	/* Traverse the list until the hare hits the end or loops */
	while (hare)
	{
		/* Check if hare and tortoise meet */
		if (tortoise == hare)
		{
			/* Reset tortoise to head*/
			tortoise = head;
			/* Traverse untiil hare and tortoise meet again*/
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			/* Traverse the loop once more to count the nodes */
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			/* Return the number of unique nodes */
			return (nodes);
		}
		/* Move tortoise by one node and hare by two nodes */
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	/* If no loop is found, return 0 */
	return (0); }
/**
 * print_listint_safe - Prints a listint_t list safely
 *
 * @head: A pointer to the head of the lisint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;
	/* Count the number of unique nodes */
	nodes = print_listint_len(head);

	/* if list is not looped, print all nodes*/
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	/* If list is looped, print nodes up to the loop point */
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		/* Print the node where the loop starts */
		printf("->[%p] %d\n", (void *)head, head->n);
	}

	/* Return the number of nodes */
	return (nodes);
}

#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head:linked list to search for
 *
 * Return: address of the node where the loop starts, or is NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *runner = head;

	if (!head)
		return (NULL);
	while (slow && runner && runner->next)
	{
		runner = runner->next->next;
		slow = slow->next;
		if (runner == slow)
		{
			slow = head;
			while (slow != runner)
			{
				slow = slow->next;
				runner = runner->next;
			}
			return (runner);
		}
	}
	return (NULL);
}

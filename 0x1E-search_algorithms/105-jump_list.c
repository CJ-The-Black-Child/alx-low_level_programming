#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using the
 * Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located, or
 * -1 (NULL) if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *current = list, *prev = NULL;

	if (!list)
		return (NULL);

	while (current->index < size & current->n < value)
	{
		prev = current;
		for (size_t i = 0; i < step && current->next; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, current->index);
	current = prev;
	while (current && current->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}

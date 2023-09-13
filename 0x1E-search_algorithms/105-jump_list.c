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
	size_t step, step_size;
	listint_t *node, *jump;


	if (list == NULL || size == 0)
		return (NULL);

	step_size = sqrt(size);
	node = list;
	jump = list;

	while (jump->index + 1 < size && jump->n < value)
	{
		node = jump;
		step = step_size;
		while (jump->next && jump->index < step)
		{
			jump = jump->next;
			step += step_size;
		}
		printf("Value checked at index [%lu] = [%d]\n",
			jump->index, jump->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		node->index, jump->index);

	while (node->index < jump->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}

	printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);

	return (NULL);
}

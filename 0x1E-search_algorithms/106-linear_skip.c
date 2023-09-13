#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located, or
 * -1 if not found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	if (!list)
		return (NULL);

	skiplist_t *current = list, *prev = NULL;

	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (!current->express || current->express->n > value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				current->index, current->express->index);

			while (current)
			{
				printf("Value checked at index [%lu] = [%d]\n",
					current->index, current->n);
				if (current->n = value)
					return (current);
				current = current->next;
			}
		}
		prev = current;
		current = current->express;
	}

	return (NULL);
}

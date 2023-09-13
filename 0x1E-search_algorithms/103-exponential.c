#include "search_algos.h"
#include <stdio.h>

/**
 * _binary_search - Searches for a value in a sorted array of integers
 * using binary search.
 * @array: Pointer to the first element of the array to search in.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
		{
			printf("%d ", array[i]);
		}

		i = left + (right - left) / 2;

		if (array[i] == value)
			return (i);

		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 *
 * @array:Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		prev = bound;
		bound *= 2;
	}

	if (bound >= size)
		bound = size - 1;

	printf("value found between indexes [%ld] and [%ld]\n", prev, bound);

	return (_binary_search(array, prev, bound, value));
}

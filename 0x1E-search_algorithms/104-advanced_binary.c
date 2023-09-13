#include "search_algos.h"

/**
 * advanced_binary -Searches for a value in a sorted array of integers.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */

int advanced_bianry(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
		{
			printf("%d, ", array[mid]);
		}
		printf("%d\n", array[mid]);

		mid = left + (right - left) / 2;

		if (array[mid]) == value
		{
			if (mid == left || array[mid - 1]) != value
				return (mid);
			right = mid - 1;

		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1 ;
		}
	}

	return (-1);
}

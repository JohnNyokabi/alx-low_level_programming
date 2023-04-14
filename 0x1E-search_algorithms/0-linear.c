#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 *
 * @array: Pointer to the first element of the search array
 * @size: number of elements in an array
 * @value: value to search for
 *
 * Return: first index on success, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

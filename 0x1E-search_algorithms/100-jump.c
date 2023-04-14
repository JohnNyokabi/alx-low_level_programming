#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where the value is located.
 * Otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, step = sqrt(size), high = step;

	if (array)
	{
		while (low < size)
		{
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			if (high < size)
			{
				if (array[low] <= value && value <= array[high])
				{
					printf("Value found between indexes [%lu] and [%lu]\n", low, high);
					break;
				}
			} else
			{
				if (array[low] <= value)
				{
					printf("Value found between indexes [%lu] and [%lu]\n", low, high);
					break;
				}
			}
			low = high;
			high = low + step;
		}

		while (low <= high)
		{
			if (low == size)
				return (-1);
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			if (array[low] == value)
				return (low);
			low++;
		}
		return (-1);
	}
	return (-1);
}

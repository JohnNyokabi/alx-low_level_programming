#include "search_algos.h"

void print_array(int *array, size_t size);
/**
 * binary_search - searches for a value in a sorted array
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index of the found value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	if (array)
	{
		while (low <= high)
		{
			print_array(array + low, (high + 1) - low);
			mid = (low + high) / 2;
			if (array[mid] < value)
				low = mid + 1;
			else if (array[mid] > value)
				high = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}
/**
 * print_array - prints an array of elements
 *
 * @array: pointer to the array
 * @size: number of elements in the array
 *
 * Return: Nothing
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i > 0 && i < size)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

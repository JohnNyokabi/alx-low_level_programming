#include "search_algos.h"

int _binary_search(int *array, int value, size_t low, size_t high);
void print_array(int *array, size_t low, size_t high);

/**
 * exponential_search - searches for a value in a sorted array array
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t start, end, x;

	if (!array || size == 0)
		return (-1);

	end = 1;
	start = 1;
	while (end < size)
	{
		if (value < array[end])
			break;
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end = end * 2;
	}
	x = end < size - 1 ? end : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", start, x);
	return (_binary_search(array, value, end / 2, x));
}

/**
 * _binary_search - searches for a value in an array of
 * integers using recursion
 * @array: array to search the value in
 * @value: value to look for
 * @low: index of the low bound
 * @high: index of the high bound
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int _binary_search(int *array, int value, size_t low, size_t high)
{
	size_t mid;

	print_array(array, low, high);
	if (high == low && array[low] != value)
		return (-1);

	mid = ((high - low) / 2) + low;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (_binary_search(array, value, low, mid - 1));
	if (array[mid] < value)
		return (_binary_search(array, value, mid + 1, high));
	return (-1);
}

/**
 * print_array - prints an array
 * @array: array to print
 * @low: index of the low bound
 * @high: index of the high bound
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}

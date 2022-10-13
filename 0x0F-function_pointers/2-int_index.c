#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 *
 * Return: index of the first element,
 * otherwise, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (cmp && array)
	{
		ind = 0;
		while (ind < size)
		{
			if (cmp(array[ind]) != 0)
			{
				return (ind);
			}
			ind++;
		}
	}
	return (-1);
}

#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * @array: pointer to an array of elements
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

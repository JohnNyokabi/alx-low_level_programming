#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value of the integers
 * @max: the maximum value of the integers
 *
 * Return: pointer to the newly created array on success,
 * NULL on fail
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}

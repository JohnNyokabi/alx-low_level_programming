#include "main.h"

/**
 * malloc_checked - allocates memory malloc
 * @b: integer allocated memory by the pointer
 *
 * Return: pointer to allocated memory on success,
 * Otherwise, return normal process termination.
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}

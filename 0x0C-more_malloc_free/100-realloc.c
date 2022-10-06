#include "main.h"

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to previous allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 *
 * Return: pointer to newly allocated memory on success,
 * otherwise NULL on fail.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int i, j;
	char *olda = ptr;

	j = new_size;
	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (new_size > old_size)
		j = old_size;
	i = 0;
	while (i < j)
	{
		a[i] = olda[i];
		i++;
	}
	free(ptr);
	return (a);
}

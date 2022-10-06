#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: the array to be allocated memory
 * @size: bytes of the memory allocated.
 *
 * Return: pointer to the allocated memory on success,
 * and NULL on fail.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr_arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr_arr = malloc(nmemb * size);
	if (ptr_arr == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		ptr_arr[i] = 0;
		i++;
	}
	return (ptr_arr);
}

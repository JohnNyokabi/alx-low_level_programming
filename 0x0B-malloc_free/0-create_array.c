#include "main.h"

/**
 * create_array - create array of size with char c
 * @size: integer type
 * @c: character type
 *
 * Return: Pointer to the array on success,
 * Otherwise NULL if it fails or is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc((size) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

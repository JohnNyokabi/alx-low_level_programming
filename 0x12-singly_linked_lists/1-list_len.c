#include "lists.h"

/**
 * list_len - returns number of elements in list_t list
 * @h: pointer to list_t list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

#include "lists.h"

/**
 * dlistint_len - counts the number of elements in linked list
 * @h: points to the beginning of the doubly linked list
 *
 * Return: number of elements in linkedn dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node;

	for (node = 0; h != NULL; node++)
		h = h->next;
	return (node);
}

#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: pointer to first node in listint_t list
 * @index: index of the node to return
 *
 * Return: pointer to the indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}

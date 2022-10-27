#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to the address of the head of first
 * element of listint_t list
 * @index: index of the node to be deleted.
 *
 * Return: on success 1, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *cpy = *head;

	if (cpy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (cpy->next == NULL)
			return (-1);
		cpy = cpy->next;
	}
	temp = cpy->next;
	cpy->next = temp->next;
	free(temp);
	return (1);
}

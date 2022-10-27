#include "lists.h"

/**
 * free_listint2 - frees linked list, and sets head to null
 * @head: linked list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
}

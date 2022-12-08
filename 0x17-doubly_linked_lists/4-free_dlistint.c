#include "lists.h"

/**
 * free_dlistint - frees a linked dlistint_t list
 * @head: points to the head of dlistint_t list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

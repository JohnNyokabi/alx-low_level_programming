#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to the address of the head of listint_t list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *previous;

	if (head == NULL || *head == NULL)
		return (NULL);
	previous = NULL;
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	(*head)->next = previous;
	return (*head);
}

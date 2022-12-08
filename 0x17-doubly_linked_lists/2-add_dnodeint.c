#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of doubly linke list
 * @head: double pointer to the list
 * @n: data to insertin the new node
 *
 * Return: the address of the new element (on success)
 * NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}

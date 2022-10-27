#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of listint_t list
 * @head: pointer to the address of head of listint_t list
 * @n: integer containing new node
 *
 * Return: address of the new element else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

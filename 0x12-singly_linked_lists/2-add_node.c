#include "lists.h"

/**
 * add_node - adds new new node at the beginning
 * of list_t list
 * @head: points at the beginning of list_t list
 * @str: pointer to the start address of the string
 * to be added
 *
 * Return: address of the new element on success,
 * otherwise, NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	if (strdup(str) == NULL)
	{
		free(n);
		return (NULL);
	}
	len = 0;
	while (str[len])
		len++;
	n->str = strdup(str);
	n->len = len;
	n->next = *head;

	*head = n;
	return (n);
}

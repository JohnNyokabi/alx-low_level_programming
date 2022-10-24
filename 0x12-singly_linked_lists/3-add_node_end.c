#include "lists.h"

/**
 * add_node_end - adds new node at the end of list_t list
 * @head: pointer to the head of list_t list
 * @str: the string to be added
 *
 * Return: address of the new element,
 * otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (strdup(str) == NULL)
	{
		free(new_node);
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}

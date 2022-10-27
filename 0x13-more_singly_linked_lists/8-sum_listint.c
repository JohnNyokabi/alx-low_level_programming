#include "lists.h"

/**
 * sum_listint - computes the sum of all data in listint_t list
 * @head: pointer to the first node in listint_t list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

#include "lists.h"

/**
 * sum_listint - calculates total sum of all the data in listint_t list
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: total sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}

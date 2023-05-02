#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *past = NULL;
	listint_t *adj = NULL;

	while (*head)
	{
		adj = (*head)->adj;
		(*head)->adj = past;
		past = *head;
		*head = adj;
	}

	*head = past;

	return (*head);
}

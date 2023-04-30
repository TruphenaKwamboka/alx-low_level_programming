#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pos to the 1st element of the list
 * @n: data to be inserted in the new element
 *
 * Return: points to the new node or returns NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next)
		last = last->next;

	last->next = new;

	return (new);
}

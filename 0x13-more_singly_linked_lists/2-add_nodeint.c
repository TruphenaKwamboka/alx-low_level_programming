#include "lists.h"

/**
 * add_nodeint - Adds node at the beginning of listint_t.
 *
 * @head: A pointer to the addressof the header.
 *
 * @n: The integer for the node.
 *
 * Return: If the function fails - NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

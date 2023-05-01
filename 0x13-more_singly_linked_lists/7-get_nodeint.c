#include "lists.h"

/**
 * get_nodeint_at_index - Locates node in the given list
 * @head: first node in the list
 * @index: index of the node to return
 *
 * Return: points to the node beeing looked for or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}

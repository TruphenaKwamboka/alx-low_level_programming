#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elements
 * in a linked listint_t list.
 * @h: head pointer
 *
 * Return: returns the number of elements in listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

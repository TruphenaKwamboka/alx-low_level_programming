/*
 * File-name:0-print_listint.c
 * Auth:Tru
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint -All the elements of listint_t are printed.
 * h: points to the head of the list_t list.
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}

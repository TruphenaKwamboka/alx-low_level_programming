#include "lists.h"

/**
 * find_listint_loop - Finds loop contained in
 *                     a listint_t list.
 * @head: A pointer to the head.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snake, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	snake = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (snake == hare)
		{
			snake = head;

			while (snake != hare)
			{
				snake = snake->next;
				hare = hare->next;
			}

			return (snake);
		}
snake = snake->next;
hare = (hare->next)->next;
	}

	return (NULL);
}

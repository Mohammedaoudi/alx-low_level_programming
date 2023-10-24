#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *sow_p, *rap_p, *prev;
	size_t nodes = 0;

	if (!h || !*h)
		return (0);

	sow_p = *h;
	rap_p = *h;

	while (sow_p && rap_p && rap_p->next)
	{
		prev = sow_p;
		sow_p = sow_p->next;
		rap_p = rap_p->next->next;

		nodes++;

		if (sow_p == rap_p)
		{
			/* Break the loop */
			prev->next = NULL;
			break;
		}
	}

	while (*h)
	{
		prev = *h;
		*h = (*h)->next;
		free(prev);
		nodes++;
	}

	*h = NULL; /* Set head to NULL */

	return (nodes);
}

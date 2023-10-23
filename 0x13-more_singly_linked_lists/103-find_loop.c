#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in linked list
 * @head: the head of the list
 *
 * Return:  The address of the node where the loop starts, or NULL
 * if ther is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tor = head, *ar = head;

	while (ar != NULL && tor != NULL)
	{
		tor = tor->next;
		ar = (ar->next)->next;

		if (tor == ar)
		{
			tor = head;
			while (tor != ar)
			{
				tor = tor->next;
				ar = ar->next;
			}
			return (tor);
		}
	}
	return (NULL);
}

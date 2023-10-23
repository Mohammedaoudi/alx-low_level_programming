#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	if (tmp == NULL)
		return;
	while (tmp != NULL)
	{
		listint_t *next = tmp->next;

		free(tmp);
		tmp = next;
	}
}

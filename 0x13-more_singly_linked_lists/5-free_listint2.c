#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: the head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;
	tmp = *head;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*head = NULL;
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum all the data (n) of the list
 * @head: the head of the liit
 *
 * Return: i
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int i = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp != NULL)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);
}

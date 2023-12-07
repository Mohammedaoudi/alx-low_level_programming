#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_dnodeint_at_index -  inserts a nouv node at a given position
 * @h: the head of the list
 * @idx: the index of the node
 * @n: the value of the node
 *
 * Return: the address of the nouv node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nouv, *temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx  == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);

	nouv = malloc(sizeof(dlistint_t));
	if (nouv == NULL)
		return (NULL);
	nouv->n = n;
	nouv->next = temp->next;
	nouv->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = nouv;

	temp->next = nouv;
	return (nouv);
}

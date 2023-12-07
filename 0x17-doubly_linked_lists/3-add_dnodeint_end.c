#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint_end - adds node at the end of the list
 * @head: the head of the list
 * @n: the value of the node
 *
 * Return: address of the nouv element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nouv, *h;

	if (head == NULL)
		return (NULL);

	nouv = malloc(sizeof(dlistint_t));
	if (nouv == NULL)
		return (NULL);

	nouv->n = n;
	nouv->next = NULL;
	nouv->prev = NULL;
	if (*head == NULL)
		*head = nouv;
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = nouv;
		nouv->prev = h;
	}
	return (nouv);
}
